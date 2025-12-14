/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249115
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((long long int) 2329773001U))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (5350247283069184623ULL)))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        {
                            var_17 &= ((((1965194311U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */unsigned int) ((/* implicit */int) (short)16187))));
                            var_18 -= ((/* implicit */short) ((((/* implicit */int) ((arr_2 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_2])))))) <= (((((((/* implicit */int) (short)-16187)) + (2147483647))) << (((((((/* implicit */int) var_9)) + (20063))) - (10)))))));
                        }
                    } 
                } 
            }
            for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)65520)) >> (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))))) & (((/* implicit */int) min((((/* implicit */unsigned char) min(((_Bool)1), ((_Bool)0)))), ((unsigned char)254)))))))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_10 [i_0] [2ULL] [16LL] [i_0] [2ULL] [i_1] [(short)10])), (arr_6 [i_0])))) && (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_15)))))) && (((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) ((unsigned long long int) var_9))))))))));
            }
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0])) || (((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_0] [(short)2] [(short)2] [i_0])))))) ^ (((var_5) - (((/* implicit */unsigned long long int) arr_5 [i_0]))))))))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_3))) && (((((/* implicit */_Bool) (short)-16188)) && (((/* implicit */_Bool) var_3))))))) <= (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < (var_12)))) < (((((/* implicit */int) (unsigned char)46)) >> (((((/* implicit */int) arr_10 [i_0] [(_Bool)0] [i_0] [i_0] [i_0] [i_1] [2ULL])) - (13199))))))))));
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-83)) + (515407567)))) + (min((((/* implicit */unsigned int) (_Bool)1)), (536870911U))))), (((min((1515245827U), (((/* implicit */unsigned int) (unsigned char)99)))) + (((/* implicit */unsigned int) ((((/* implicit */int) (short)-16181)) - (((/* implicit */int) (unsigned char)10))))))))))));
        }
        for (long long int i_6 = 2; i_6 < 19; i_6 += 1) 
        {
            var_24 = ((/* implicit */long long int) min((((min((var_12), (((/* implicit */unsigned long long int) 890422801U)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 8126464)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) | (var_13)))) && (((/* implicit */_Bool) ((int) (unsigned short)65525))))))));
            var_25 = ((/* implicit */_Bool) min((var_25), (((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_0]))) >= (arr_6 [i_0])))) + (((-1657046561) | (((/* implicit */int) var_1))))))) || (((/* implicit */_Bool) min((((570769399) / (((/* implicit */int) (unsigned short)57531)))), (((/* implicit */int) ((((/* implicit */int) var_6)) <= (var_4)))))))))));
            var_26 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3758096375U)) && ((_Bool)1)));
            arr_18 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((var_0) >> (((((/* implicit */int) (unsigned short)33873)) - (33826))))) < (((/* implicit */unsigned long long int) ((int) 2103939770U))))))) ^ (((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) / (arr_2 [i_0]))))));
        }
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((unsigned short) ((signed char) ((_Bool) var_4)))))));
        arr_19 [i_0] [i_0] = ((/* implicit */_Bool) ((max((8651591786976392084LL), (((/* implicit */long long int) (short)16185)))) + (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((int) (short)32765)))))));
        var_28 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) ((unsigned short) 13813054577893970161ULL))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0])) || (((/* implicit */_Bool) var_4))))))));
    }
    for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 3) 
    {
        arr_24 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)47673)) <= (((/* implicit */int) ((1299610268) <= (((/* implicit */int) (_Bool)1)))))))) & (((((/* implicit */int) min((((/* implicit */unsigned short) (short)24576)), (arr_1 [i_7] [i_7])))) + (((((/* implicit */int) arr_22 [i_7 - 1])) - (65535)))))));
        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((unsigned long long int) ((signed char) var_14))) % (((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7]))) * (2792846257U))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_7] [i_7]))) | (2838729558U)))))))))));
        var_30 = ((/* implicit */unsigned long long int) ((unsigned short) ((_Bool) ((((/* implicit */int) arr_3 [17ULL] [(_Bool)1] [(_Bool)1])) & (arr_12 [6ULL] [6ULL] [(_Bool)1])))));
    }
    var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((int) var_9)), (((/* implicit */int) ((unsigned char) var_8)))))) + (min((max((var_0), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((var_3) << (((var_11) - (1506954828))))))))));
}
