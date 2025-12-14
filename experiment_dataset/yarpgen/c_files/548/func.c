/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/548
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
    var_12 = ((/* implicit */short) var_11);
    var_13 = ((/* implicit */short) var_1);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */short) ((int) 3227236824776906594LL));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned char) ((short) (unsigned short)65519)))), (((((/* implicit */_Bool) ((arr_2 [i_0]) >> (((((/* implicit */int) var_4)) - (26519)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (0LL) : (((/* implicit */long long int) var_3))))) : (arr_0 [i_0 - 1]))))))));
        var_16 = ((/* implicit */unsigned short) ((((unsigned long long int) arr_0 [i_0])) * (((/* implicit */unsigned long long int) ((var_1) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)25429)) / (((/* implicit */int) var_7))))))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((1242098240U) - (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) == (((/* implicit */int) (_Bool)0)))))))))))));
                        arr_13 [i_0] [i_0] [i_2 - 1] [i_3 - 1] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1])) ? (((((/* implicit */_Bool) 3921732629U)) ? (((/* implicit */int) (unsigned short)1016)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_9)))), ((((!((_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8589934591LL))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (arr_3 [i_0]))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_12 [i_2 + 1] [i_1] [(short)9] [i_3 - 1] [i_3 - 1]) * (((/* implicit */unsigned long long int) var_3))))))))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(max((2881874551U), (((/* implicit */unsigned int) -22393290))))))) ? ((+(((var_1) % (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) ((short) 1413092745U))), (arr_4 [i_0])))))));
                            var_20 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (-2147483647 - 1))), (1413092737U))), (((/* implicit */unsigned int) 2147483647))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (arr_3 [i_0])))) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (arr_3 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                        }
                        arr_16 [i_0] [i_0] [i_0 + 1] [i_2] [i_0] |= ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0)))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (+(min((arr_1 [i_0 + 1] [8U]), (((/* implicit */unsigned long long int) var_9)))))))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 1; i_5 < 21; i_5 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_5] [i_5 - 1] [i_5 - 1] [(unsigned short)12])))))));
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_5])) || (((/* implicit */_Bool) arr_3 [i_5]))));
    }
    for (int i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        var_24 = ((/* implicit */short) var_2);
        arr_24 [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((int) arr_19 [i_6])))))));
        arr_25 [i_6] = max(((unsigned short)42481), ((unsigned short)65535));
    }
    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        var_25 = ((/* implicit */unsigned int) var_8);
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((((/* implicit */int) var_5)), (var_11)))))) ? (max((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (arr_8 [i_7] [i_7] [(unsigned char)20]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_2 [i_7])))), ((!(((/* implicit */_Bool) arr_11 [(short)7] [i_7] [i_7] [i_7] [i_7]))))))))));
        arr_28 [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)7)) >> (((max((((/* implicit */unsigned long long int) -7767012756470693495LL)), (4946209466525064783ULL))) - (10679731317238858110ULL)))));
    }
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) max((-8948460570959272102LL), (4219277035258941144LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (max((var_8), (((/* implicit */long long int) var_0))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_5)), ((unsigned short)65535)))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) (-2147483647 - 1))))))))));
    var_28 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */int) var_0))));
}
