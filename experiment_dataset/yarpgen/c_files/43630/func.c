/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43630
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
    var_13 = var_11;
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_4 [i_0] &= ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
        arr_5 [2] [i_0] = ((/* implicit */unsigned short) ((var_8) * (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_7 [i_1] [i_1]) >> (((arr_7 [i_1] [i_1]) - (4786056579960121394ULL)))))) ? (((arr_7 [i_1] [i_1]) >> (((((/* implicit */int) var_11)) - (36440))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 19; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        arr_17 [i_1] = ((/* implicit */int) var_7);
                        var_15 += ((/* implicit */unsigned short) (_Bool)1);
                        var_16 = ((/* implicit */_Bool) -1008543078);
                    }
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(_Bool)1] [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 2])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26)))))) ? (((/* implicit */int) max((((unsigned short) (unsigned short)26)), ((unsigned short)12)))) : ((((((~(((/* implicit */int) (unsigned short)65524)))) + (2147483647))) >> (((max((var_6), (((/* implicit */long long int) var_11)))) - (36417LL)))))));
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) (unsigned short)8838))), (((((/* implicit */_Bool) (unsigned short)65523)) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) (unsigned short)65523))))))) ? (((/* implicit */long long int) ((((var_12) + (2147483647))) >> (((((/* implicit */int) arr_13 [i_2 - 2] [i_1])) - (42948)))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)11534), ((unsigned short)11534))))) : (((((/* implicit */_Bool) arr_14 [(_Bool)1] [(_Bool)1] [i_3])) ? (288230375883276288LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1)))))));
                        arr_24 [i_1] = ((/* implicit */unsigned short) 1180178650U);
                    }
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_11 [i_1] [(unsigned short)17] [(short)13] [(unsigned short)1])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_9)))) : ((-(((/* implicit */int) var_7))))))))));
                }
            } 
        } 
    }
    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        var_21 = ((/* implicit */_Bool) (unsigned char)139);
        var_22 = ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_25 [i_7])), ((unsigned short)56293)))) >> ((((~(((/* implicit */int) arr_25 [i_7])))) + (19)))));
        var_23 += ((/* implicit */_Bool) arr_27 [i_7]);
        var_24 = ((/* implicit */unsigned char) arr_25 [i_7]);
        /* LoopSeq 3 */
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            var_25 = ((/* implicit */int) (-((-(arr_29 [i_8])))));
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((arr_25 [i_8]) ? (((/* implicit */int) arr_25 [i_7])) : ((+(var_0))))) : ((-(((int) var_11))))));
            var_27 = ((/* implicit */_Bool) (~((-(((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
        }
        for (int i_9 = 4; i_9 < 22; i_9 += 3) 
        {
            arr_33 [i_7] = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)151));
            var_28 = ((/* implicit */_Bool) min((((/* implicit */int) max((var_1), ((unsigned short)35452)))), (((int) var_1))));
        }
        for (int i_10 = 0; i_10 < 23; i_10 += 1) 
        {
            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((_Bool) (+(((/* implicit */int) var_1))))))));
            var_30 = (~((-(arr_34 [i_7]))));
        }
    }
    for (int i_11 = 0; i_11 < 22; i_11 += 1) 
    {
        var_31 += min((((((/* implicit */_Bool) var_3)) ? (((22U) | (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) arr_40 [i_11] [i_11])))), (arr_32 [i_11]));
        var_32 += ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)41449))) <= (9223372028264841216LL))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)8))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)107))))) : (max((-288230375883276288LL), (((/* implicit */long long int) (unsigned char)97))))))));
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_11] [i_11] [i_11])) ? (max((-5213288020267525056LL), (((/* implicit */long long int) (unsigned short)12341)))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)))) >> (((((1049557988) >> (((arr_26 [i_11] [(unsigned char)15]) - (34941591U))))) - (512463))))))));
        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) max(((~(((/* implicit */int) var_3)))), (((((var_0) + (2147483647))) >> (((((/* implicit */int) (unsigned short)34825)) - (34794))))))))));
    }
    var_35 = var_3;
    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) 1312091672U)) : (min((((/* implicit */long long int) var_12)), (var_8)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((3751779137U) - (3751779115U))))))))))))));
}
