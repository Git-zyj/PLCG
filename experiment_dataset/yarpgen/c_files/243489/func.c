/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243489
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((var_10) & (((/* implicit */int) (signed char)-49))))))) : (max((((/* implicit */long long int) ((((/* implicit */int) var_8)) >> (((var_1) - (1241464029)))))), ((-(var_6)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 4) /* same iter space */
        {
            arr_6 [i_1] [i_1] [i_1] &= ((((/* implicit */_Bool) (short)13734)) || (((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (((/* implicit */int) (unsigned char)30))))));
            var_12 = ((1012395640233144725LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-20254))));
        }
        for (unsigned short i_2 = 2; i_2 < 13; i_2 += 4) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) max((2147483638), (((/* implicit */int) (signed char)-2))))) > (arr_3 [i_0] [i_0])))) != (((/* implicit */int) ((unsigned char) ((var_7) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [(signed char)1] [i_0]))))))));
            arr_11 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (_Bool)1))) % (((/* implicit */int) ((short) (unsigned short)65526)))))) || (((/* implicit */_Bool) ((861537524) << (((/* implicit */int) ((((/* implicit */int) (signed char)5)) > (((/* implicit */int) (signed char)-34)))))))));
            var_14 |= ((/* implicit */long long int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2843689316459123914LL)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_4 [i_0] [i_2])))))))), ((unsigned short)15634)));
        }
        for (unsigned short i_3 = 2; i_3 < 13; i_3 += 4) /* same iter space */
        {
            arr_14 [i_0] [i_0] = ((/* implicit */_Bool) (-(((((unsigned long long int) arr_1 [(signed char)4] [i_0])) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_0] [i_0])))))));
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 13; i_4 += 2) 
            {
                for (signed char i_5 = 2; i_5 < 13; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (unsigned char)0))));
                            arr_23 [i_4] [i_5] [(signed char)4] |= ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_24 [i_3] [i_0] = ((/* implicit */int) arr_12 [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-9818))));
            arr_25 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~((((~(9378688935373816718ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_4 [i_0] [i_0])))))))));
            var_17 ^= ((/* implicit */signed char) (short)-25471);
        }
        var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))) - (min((var_6), (((/* implicit */long long int) (signed char)-17))))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | ((-(var_9)))))))));
        /* LoopNest 3 */
        for (long long int i_7 = 1; i_7 < 12; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                for (long long int i_9 = 2; i_9 < 12; i_9 += 4) 
                {
                    {
                        var_19 = ((/* implicit */int) var_5);
                        arr_33 [i_8] [i_9] &= ((/* implicit */unsigned short) ((long long int) (((!(((/* implicit */_Bool) (unsigned short)17552)))) || (((/* implicit */_Bool) max((((/* implicit */long long int) arr_29 [i_0] [i_0] [i_8])), (-3736100294613577768LL)))))));
                        arr_34 [i_0] [i_0] = ((/* implicit */signed char) var_7);
                        arr_35 [i_0] [i_7] [0] [i_9] = ((/* implicit */signed char) (!(((((/* implicit */int) var_4)) > ((+(((/* implicit */int) (unsigned char)213))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 14; i_10 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned char) (((-(-2147483645))) & (((/* implicit */int) ((((/* implicit */int) (unsigned char)196)) == (((/* implicit */int) (unsigned short)15)))))));
                            arr_38 [i_0] [i_7] [i_0] [(unsigned short)9] [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (signed char)64)))));
                            arr_39 [i_0] [i_7] [11ULL] [i_9] [i_0] [i_0] [i_8] = ((/* implicit */long long int) ((signed char) arr_16 [i_9 + 1] [i_7 - 1]));
                        }
                        /* vectorizable */
                        for (signed char i_11 = 1; i_11 < 13; i_11 += 3) 
                        {
                            arr_42 [i_0] [i_0] [i_8] [i_9] |= ((/* implicit */signed char) (unsigned short)6);
                            arr_43 [i_0] [i_7] [i_0] [i_9 - 2] [i_11 - 1] = ((/* implicit */long long int) (_Bool)1);
                            arr_44 [i_0] [i_0] [i_0] [i_0] [(unsigned char)13] [i_11] = ((/* implicit */unsigned char) -861537529);
                        }
                        for (long long int i_12 = 0; i_12 < 14; i_12 += 3) 
                        {
                            var_21 ^= ((/* implicit */int) ((((((/* implicit */_Bool) ((var_10) + (((/* implicit */int) var_5))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) - (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5651732500564054281LL)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (short)-20264))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_17 [i_9] [i_9] [i_9]))))));
                            var_22 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_46 [i_7] [i_7 + 1] [i_7] [i_0] [i_7])) * (((/* implicit */int) arr_29 [1] [i_7 - 1] [i_7])))));
                            arr_47 [i_0] [i_8] [i_7] [i_0] = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (arr_32 [i_0] [2] [i_8] [i_9]))), (((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) (unsigned char)249)) : (var_1))))) < (((/* implicit */int) arr_29 [i_0] [i_7] [i_8]))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_2 [i_12] [i_0] [(_Bool)1])) >= (((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_22 [i_0] [i_7] [i_7] [i_9 - 1]))) ? ((((_Bool)0) ? (((/* implicit */int) arr_15 [i_0] [i_8] [i_8])) : (arr_5 [1LL]))) : (((((/* implicit */int) (unsigned char)108)) >> (((/* implicit */int) (_Bool)1))))))) : (min((((/* implicit */unsigned long long int) ((arr_5 [i_9]) - (-1148122011)))), (((((/* implicit */_Bool) (short)-17447)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30284))) : (var_9)))))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) max((((/* implicit */signed char) (_Bool)1)), (var_0))))) ? (min(((-(((/* implicit */int) arr_7 [i_0] [i_7])))), (((((-1868343540) + (2147483647))) >> (((((/* implicit */int) arr_30 [i_9] [i_7] [i_8])) - (202))))))) : (((((/* implicit */int) ((((/* implicit */int) arr_30 [i_9] [i_7 + 2] [i_7])) != (((/* implicit */int) (signed char)70))))) & (((/* implicit */int) var_8)))))))));
                        }
                    }
                } 
            } 
        } 
        arr_48 [i_0] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)155)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */int) var_4)) << (((((/* implicit */int) var_8)) - (2817))))) : (((/* implicit */int) ((unsigned char) (signed char)-7))))));
    }
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 14; i_13 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_14 = 0; i_14 < 14; i_14 += 2) 
        {
            var_25 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) var_10))) ^ (var_2)));
            arr_54 [i_14] [i_14] [i_14] &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_13] [i_14]))) > (-78917160717095370LL)));
        }
        /* LoopSeq 1 */
        for (signed char i_15 = 1; i_15 < 13; i_15 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    for (unsigned char i_18 = 0; i_18 < 14; i_18 += 3) 
                    {
                        {
                            var_26 &= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)156))));
                            arr_65 [i_13] [i_13] [i_13] [i_16] [i_13] [13LL] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_13] [i_15 + 1]))) : (-8757432875478605551LL)))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */int) ((signed char) -5651732500564054267LL));
        }
        arr_66 [i_13] = ((/* implicit */int) arr_59 [i_13] [i_13]);
        var_28 &= ((/* implicit */signed char) ((short) (~(var_6))));
    }
}
