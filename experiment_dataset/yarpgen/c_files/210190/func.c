/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210190
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 10701437156806631880ULL)) ? (8224452170682004585ULL) : (((/* implicit */unsigned long long int) 15728640U))))) ? (((8224452170682004573ULL) | (10222291903027547029ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1629731877U)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((max((var_4), (((/* implicit */long long int) arr_2 [2LL])))) - (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [10LL])))))))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_17 &= min((((/* implicit */unsigned int) ((short) 10701437156806631899ULL))), (max((((2334756855U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [6U]))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2])) >= (-11LL)))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 1; i_4 < 20; i_4 += 3) 
                        {
                            var_18 += ((/* implicit */short) ((max((arr_0 [i_4 - 1] [2]), (arr_11 [10ULL] [i_1 + 1] [i_2 - 1] [i_4 + 1]))) + (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) arr_3 [(signed char)4] [i_2])) >= (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [(unsigned char)10]))))))))));
                            var_19 ^= ((/* implicit */long long int) min(((short)-1009), (((/* implicit */short) (!((_Bool)0))))));
                        }
                        arr_15 [i_0] [i_0] [i_2] [(_Bool)1] [i_3] &= ((/* implicit */unsigned short) max((((562949416550400ULL) << (((((/* implicit */int) arr_12 [i_1 + 1] [i_2 - 1] [(signed char)9] [18U] [i_2])) + (48))))), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (short)0)))) < ((+(((/* implicit */int) (_Bool)1)))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 2; i_5 < 19; i_5 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 1; i_6 < 20; i_6 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */int) ((3610265648U) | (3342302483U)));
                            var_21 *= ((unsigned short) (+(var_13)));
                            var_22 |= ((/* implicit */signed char) 2334756877U);
                            var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_5 + 1] [i_5] [i_2] [i_2 + 1])) * (((/* implicit */int) arr_14 [i_5 - 1] [(signed char)10] [i_2] [i_2 - 1]))));
                            arr_21 [i_5] [i_5] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) var_4)) : (13935027285433797634ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42410)))));
                        }
                        for (unsigned short i_7 = 1; i_7 < 20; i_7 += 3) /* same iter space */
                        {
                            arr_25 [i_0] [i_7] [i_5] [i_5] [i_7 + 1] [i_0] |= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_5])))))));
                            var_24 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) 8224452170682004587ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [(unsigned short)3] [i_7 + 1]))) : (var_0))) * (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_7] [i_7 + 2] [6LL] [6LL])))))));
                        }
                        for (unsigned short i_8 = 1; i_8 < 20; i_8 += 3) /* same iter space */
                        {
                            var_26 -= ((/* implicit */short) arr_14 [(unsigned short)1] [(_Bool)1] [16LL] [i_8 + 2]);
                            var_27 -= ((((/* implicit */_Bool) arr_23 [i_0] [20] [i_2] [i_2] [i_5] [i_8])) || ((!(((/* implicit */_Bool) arr_17 [i_0])))));
                            var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [6ULL] [10ULL] [i_8])) ? (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_10)) - (209))))) : (((/* implicit */int) arr_27 [(_Bool)1] [i_5] [i_5] [i_2 + 1]))));
                            var_29 *= ((/* implicit */unsigned int) (~(arr_24 [i_5] [i_1 - 1])));
                        }
                        var_30 ^= (!(((/* implicit */_Bool) 8224452170682004561ULL)));
                    }
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        var_31 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_9]) && (((/* implicit */_Bool) 8212788255120462573ULL)))))))) <= (684701619U)));
                        var_32 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)31)) == (((/* implicit */int) (_Bool)1)))))));
                    }
                    var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) 1247924929U))));
                }
            } 
        } 
    }
    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 2) 
    {
        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((short) min((((((/* implicit */_Bool) 8412438127257564735LL)) ? (7204454110259720354LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65474))))), (((/* implicit */long long int) arr_34 [i_10] [i_10]))))))));
        var_35 -= ((/* implicit */short) min((((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */int) (unsigned char)249)), (355438472))) : (((((/* implicit */int) arr_35 [i_10])) * (((/* implicit */int) var_8)))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [(short)19])) || (((/* implicit */_Bool) arr_33 [i_10])))))));
        var_36 = ((/* implicit */unsigned int) max((var_36), (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 441276239)))) - (min((((684701615U) << (((arr_34 [i_10] [i_10]) - (3144912316U))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) 684701619U)) == (var_7))))))))));
    }
    /* vectorizable */
    for (long long int i_11 = 0; i_11 < 19; i_11 += 4) 
    {
        var_37 = ((/* implicit */_Bool) max((var_37), (((((/* implicit */int) arr_13 [i_11] [i_11] [i_11] [i_11] [(unsigned char)12])) >= (((/* implicit */int) arr_13 [i_11] [i_11] [i_11] [i_11] [i_11]))))));
        var_38 -= ((/* implicit */short) (!(((70368739983360ULL) >= (341469822378464104ULL)))));
    }
    for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 3) 
    {
        var_39 += ((/* implicit */_Bool) (~(((/* implicit */int) min((arr_35 [i_12 + 2]), (arr_35 [i_12 + 1]))))));
        var_40 *= ((/* implicit */short) min((((min((((/* implicit */unsigned long long int) (signed char)35)), (var_13))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)(-127 - 1)), (arr_35 [(unsigned char)1]))))))), (((arr_39 [i_12 + 2] [i_12 - 1]) <= (arr_39 [i_12] [i_12])))));
        /* LoopSeq 1 */
        for (signed char i_13 = 2; i_13 < 21; i_13 += 2) 
        {
            arr_43 [i_12] [i_13] [3] |= ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) (signed char)-1))))) ? ((-(arr_39 [(short)3] [i_13]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_12 - 1] [i_12 - 1] [i_12 - 1])))))));
            var_41 -= ((/* implicit */signed char) 1455711943061891378LL);
        }
        /* LoopSeq 3 */
        for (int i_14 = 0; i_14 < 23; i_14 += 1) 
        {
            var_42 -= ((/* implicit */unsigned long long int) max(((+(((var_7) % (((/* implicit */long long int) arr_46 [21])))))), (((/* implicit */long long int) (-(((int) arr_39 [2U] [i_14])))))));
            /* LoopNest 3 */
            for (unsigned short i_15 = 0; i_15 < 23; i_15 += 4) 
            {
                for (unsigned short i_16 = 0; i_16 < 23; i_16 += 3) 
                {
                    for (unsigned short i_17 = 0; i_17 < 23; i_17 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */int) max((var_43), (((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_50 [i_12 + 3] [i_15] [i_12] [i_12 + 1] [i_12 + 1] [i_12]), (arr_50 [i_12] [i_15] [i_15] [i_16] [i_16] [i_17]))))))) % ((~(arr_51 [i_12 + 2] [i_15])))))));
                            var_44 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)61)), (-1455711943061891378LL)));
                        }
                    } 
                } 
            } 
        }
        for (short i_18 = 0; i_18 < 23; i_18 += 3) 
        {
            var_45 *= ((/* implicit */signed char) ((unsigned short) min((min((var_2), (((/* implicit */short) (signed char)-9)))), (((/* implicit */short) (unsigned char)255)))));
            var_46 = ((/* implicit */int) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_18] [i_18] [i_18])) ? (2007562845U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_18])))))), (arr_50 [i_12] [(short)8] [i_12 + 1] [i_18] [i_18] [i_18]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_12 + 1] [22ULL])) ? (((/* implicit */int) arr_38 [i_12 + 1] [i_12 + 1])) : (((/* implicit */int) arr_38 [i_12 - 1] [i_12 + 2])))))));
        }
        for (short i_19 = 0; i_19 < 23; i_19 += 1) 
        {
            var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned char)32)) >> (((12622476858981376588ULL) - (12622476858981376571ULL))))), (((((/* implicit */_Bool) (short)11493)) ? (((/* implicit */int) arr_42 [i_12] [i_12 - 1] [i_19])) : (((/* implicit */int) arr_42 [i_12] [i_12 - 1] [i_19])))))))));
            var_48 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_45 [i_12 + 3] [i_19] [i_12 + 3])) != (((/* implicit */int) arr_45 [i_12] [(short)0] [i_12 + 3])))))) >= (((unsigned long long int) arr_50 [i_19] [(signed char)14] [i_19] [i_12 + 2] [i_19] [i_19]))));
            var_49 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 2226402666U)) > (arr_39 [i_12 + 1] [i_12 - 1])))), (arr_48 [i_12] [i_19] [i_12])));
            arr_63 [(_Bool)1] [(_Bool)1] &= ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)(-32767 - 1)))))), (((((/* implicit */unsigned long long int) 805075871)) * (arr_49 [i_12] [i_19] [i_19] [i_19]))))), (((/* implicit */unsigned long long int) ((unsigned short) max((arr_53 [(unsigned char)2] [8U] [i_19]), (((/* implicit */unsigned long long int) var_5))))))));
        }
        var_50 ^= ((/* implicit */signed char) ((arr_33 [i_12 + 2]) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)11479))) ^ (3186805759U)))))))));
    }
    var_51 = ((/* implicit */unsigned long long int) max((var_51), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))));
}
