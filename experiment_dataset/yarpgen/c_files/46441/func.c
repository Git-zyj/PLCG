/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46441
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
    var_12 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) var_5)), (var_1))))) < (max((((((/* implicit */_Bool) -1)) ? (0) : (var_10))), (((/* implicit */int) ((1205430958) < (((/* implicit */int) (short)18054)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((unsigned short) max((-126144239), (((/* implicit */int) var_5)))));
        var_13 &= ((/* implicit */int) arr_1 [i_0]);
        arr_3 [i_0 - 1] = ((/* implicit */_Bool) 13438325389538281323ULL);
        var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39279)))))) >= (((((/* implicit */_Bool) 1620495405)) ? (((/* implicit */unsigned long long int) -126144239)) : (11750783840116227079ULL))))))));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_8 [i_1] = max((((((/* implicit */int) ((729691096814224368ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [13]))) <= (var_6)))))), ((+(-126144239))));
        var_15 ^= ((/* implicit */unsigned short) ((int) (unsigned short)26249));
        var_16 &= ((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned short)39252)))), (((((/* implicit */_Bool) 1729520852)) ? (var_10) : (((/* implicit */int) arr_7 [i_1] [i_1]))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 3; i_2 < 18; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) (((((-(((/* implicit */int) (unsigned short)31065)))) + (2147483647))) << (((((((((/* implicit */_Bool) (unsigned short)39312)) ? (-126144239) : (((/* implicit */int) arr_1 [i_2 - 2])))) + (126144240))) - (1)))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(10)))) ? (-1821940362) : (((/* implicit */int) (unsigned short)2341))))) ? (((/* implicit */int) ((unsigned short) max((((/* implicit */int) (unsigned short)39287)), (-2))))) : (((((/* implicit */int) max((var_0), (((/* implicit */short) (_Bool)1))))) / ((~(((/* implicit */int) arr_7 [i_1] [i_2 - 2]))))))));
                        arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) var_7)) ? (((int) (!(((/* implicit */_Bool) (short)32764))))) : (-2));
                        arr_21 [i_1] = ((/* implicit */unsigned long long int) (unsigned short)51867);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)0)))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) (unsigned short)44519))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)19206)))))))));
                            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_17 [i_1] [i_2] [i_2 - 2] [i_3] [i_3] [i_5]))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                        {
                            arr_27 [i_1] [i_2 - 3] [i_2] [i_4] [i_6] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)19577)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_10) : (-1808096193)))) : (max((((/* implicit */unsigned long long int) var_10)), (var_6))))), ((-(arr_25 [i_6] [i_2 + 2] [i_2 - 1] [7] [i_2])))));
                            var_21 = (+(arr_17 [13] [i_1] [i_3] [i_2] [i_1] [i_1]));
                        }
                    }
                } 
            } 
        } 
    }
    for (int i_7 = 2; i_7 < 11; i_7 += 1) 
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((int) (unsigned short)127))) ^ (5ULL)))))))));
        arr_30 [i_7 - 1] = (unsigned short)39287;
    }
}
