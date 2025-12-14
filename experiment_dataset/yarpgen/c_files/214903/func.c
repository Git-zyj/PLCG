/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214903
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 3; i_3 < 22; i_3 += 4) 
                    {
                        var_17 = var_14;
                        arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned char) (~(var_4))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        arr_12 [i_0] [i_0] [i_1] [i_4] = ((/* implicit */signed char) (+(min((2017612633061982208ULL), ((-(16429131440647569429ULL)))))));
                        arr_13 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */long long int) 16429131440647569408ULL);
                    }
                    var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (_Bool)1))))))), (min((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) (short)12558))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 12; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                {
                    arr_22 [i_5] [i_6] [i_6] [i_6] = ((/* implicit */int) (signed char)-98);
                    var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned short) var_12)), (min((((/* implicit */unsigned short) (signed char)-98)), ((unsigned short)14755)))));
                    arr_23 [i_6] [i_5] [i_5] [i_5] = ((/* implicit */int) (short)4381);
                    var_20 = ((/* implicit */short) var_14);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
    {
        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            {
                var_21 = ((/* implicit */int) var_5);
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    for (unsigned char i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        {
                            arr_34 [i_8] [i_9] [i_9] [i_8] = ((/* implicit */long long int) ((unsigned char) (-(1362709471010832601ULL))));
                            arr_35 [i_8] = ((/* implicit */signed char) 5625017410494834131LL);
                        }
                    } 
                } 
                arr_36 [i_8] = ((/* implicit */signed char) 16429131440647569408ULL);
            }
        } 
    } 
}
