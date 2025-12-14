/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21663
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
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = min(((-(((long long int) var_15)))), (((/* implicit */long long int) ((_Bool) arr_0 [13ULL] [i_0]))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (((long long int) arr_0 [i_0] [i_0]))))) ? ((((~(14782596019111292803ULL))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (var_13))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) var_17))) / (-3514267262467669714LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)34992)) + (arr_1 [i_0])))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_5 [i_1] [4LL] = ((/* implicit */unsigned long long int) arr_4 [i_1]);
        arr_6 [21LL] = ((/* implicit */unsigned long long int) ((unsigned char) ((_Bool) (unsigned char)4)));
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) arr_3 [i_1] [(unsigned char)8]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_2]))))))) ? (((unsigned long long int) (unsigned short)11284)) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)54247), (((/* implicit */unsigned short) (short)-18781))))))));
        var_20 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_9 [i_2] [i_2])))) * (((/* implicit */int) arr_9 [i_2] [(_Bool)1]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 2) 
        {
            arr_13 [i_2] [i_2] [0ULL] = ((/* implicit */unsigned char) var_13);
            arr_14 [i_2] [(unsigned char)2] [(_Bool)1] |= ((/* implicit */signed char) ((int) (_Bool)1));
        }
        for (long long int i_4 = 2; i_4 < 11; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    {
                        arr_25 [(unsigned char)2] [i_4] [i_4] [i_2] = (~((~(((/* implicit */int) ((_Bool) var_3))))));
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_3 [14LL] [i_4]))));
                        var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_19 [i_2] [i_2]), (arr_19 [i_2] [i_2]))))));
                        var_23 = ((/* implicit */unsigned int) max((min((((629172932518984649LL) ^ (var_4))), (((/* implicit */long long int) ((int) arr_22 [i_2] [(_Bool)1] [i_2]))))), (((/* implicit */long long int) var_12))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))));
            var_25 -= (+(min((arr_11 [i_4]), (((/* implicit */long long int) arr_18 [i_2] [4] [4])))));
            /* LoopNest 3 */
            for (unsigned char i_7 = 1; i_7 < 11; i_7 += 1) 
            {
                for (unsigned char i_8 = 3; i_8 < 11; i_8 += 1) 
                {
                    for (unsigned char i_9 = 2; i_9 < 10; i_9 += 1) 
                    {
                        {
                            var_26 = (i_2 % 2 == zero) ? (((/* implicit */int) max((((unsigned long long int) arr_33 [i_2] [(_Bool)0] [(_Bool)0] [(unsigned short)1] [(signed char)4])), (((/* implicit */unsigned long long int) ((max((6165690039303550432LL), (22426439998271246LL))) << (((arr_29 [10] [i_4] [i_4] [i_2]) - (140337521))))))))) : (((/* implicit */int) max((((unsigned long long int) arr_33 [i_2] [(_Bool)0] [(_Bool)0] [(unsigned short)1] [(signed char)4])), (((/* implicit */unsigned long long int) ((max((6165690039303550432LL), (22426439998271246LL))) << (((((arr_29 [10] [i_4] [i_4] [i_2]) - (140337521))) - (1883050173)))))))));
                            arr_35 [i_2] [i_9] = ((/* implicit */_Bool) ((unsigned char) ((long long int) ((signed char) 5475446441854690613LL))));
                            arr_36 [i_2] = ((/* implicit */unsigned char) (-(min((min((var_14), (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) min((arr_0 [i_7] [i_2]), (((/* implicit */long long int) 2380872649U)))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_11 = 0; i_11 < 12; i_11 += 4) 
            {
                arr_41 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 70221287)) + (15678276561065868821ULL)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (var_3))))));
                var_27 = ((/* implicit */signed char) arr_1 [(unsigned short)5]);
            }
            for (short i_12 = 2; i_12 < 10; i_12 += 4) 
            {
                arr_44 [i_2] [i_2] [i_12] [i_12] = (i_2 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) ((short) arr_28 [i_2]))) >> (((((/* implicit */int) min((arr_32 [i_12 - 1] [i_2] [i_12 - 1] [i_12 - 2] [i_12 - 2]), (arr_32 [i_12 + 2] [i_2] [i_12 + 1] [i_12 - 2] [i_12 + 2])))) - (31)))))) : (((/* implicit */signed char) ((((/* implicit */int) ((short) arr_28 [i_2]))) >> (((((((/* implicit */int) min((arr_32 [i_12 - 1] [i_2] [i_12 - 1] [i_12 - 2] [i_12 - 2]), (arr_32 [i_12 + 2] [i_2] [i_12 + 1] [i_12 - 2] [i_12 + 2])))) - (31))) + (133))))));
                var_28 = ((/* implicit */short) arr_34 [2LL] [10LL] [(_Bool)1] [(_Bool)1] [(short)9] [(_Bool)1]);
                arr_45 [i_2] [i_10] = ((/* implicit */short) ((unsigned int) max((((/* implicit */unsigned long long int) ((long long int) (unsigned char)115))), (arr_27 [i_12 + 1] [(unsigned char)5] [(unsigned char)5]))));
            }
            var_29 = ((/* implicit */unsigned long long int) ((14782596019111292803ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (0LL)))) ? (min((4059764440210448368LL), (288160007407534080LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)28242))))) << (((((/* implicit */int) (signed char)(-127 - 1))) + (133)))));
            arr_46 [i_2] = ((/* implicit */long long int) ((_Bool) (+(((((/* implicit */_Bool) 135107988821114880LL)) ? (var_14) : (((/* implicit */unsigned long long int) arr_11 [i_2])))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 12; i_13 += 3) 
        {
            for (short i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                {
                    var_31 = ((/* implicit */unsigned char) arr_37 [(unsigned char)0] [(unsigned char)0]);
                    /* LoopSeq 1 */
                    for (short i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        arr_54 [i_2] [i_13] [i_13] [i_2] [i_14] = ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)71)) : (-70221287));
                        arr_55 [1LL] [(short)8] [(short)8] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3414703983320079662LL)) ? (((/* implicit */int) (short)-11957)) : (((/* implicit */int) (short)-11985))));
                        arr_56 [i_2] [i_14] [(_Bool)1] [i_2] = ((/* implicit */_Bool) 1969330913);
                    }
                    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) var_17))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [9ULL] [i_2] [i_2] [i_2] [i_2]))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [(short)7] [5ULL] [i_14]))) : (var_15)))))) ? (max((((/* implicit */unsigned long long int) ((unsigned short) arr_11 [i_2]))), (min((((/* implicit */unsigned long long int) arr_52 [i_2] [i_13] [(short)7])), (var_13))))) : (((/* implicit */unsigned long long int) (+(min((9223372036854775807LL), (((/* implicit */long long int) arr_30 [i_2] [i_2] [i_2])))))))));
                }
            } 
        } 
    }
    var_33 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15349))) : (15474172707293414628ULL)));
}
