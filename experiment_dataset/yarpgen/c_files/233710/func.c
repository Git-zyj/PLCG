/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233710
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_14 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_5 [i_1])))) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_11))))))) ? (((long long int) min((var_12), (((/* implicit */unsigned int) var_11))))) : (((/* implicit */long long int) 1073740800))));
                    arr_7 [i_1] = ((/* implicit */_Bool) (-(min((0LL), (((/* implicit */long long int) ((((/* implicit */int) (short)-1)) + (-1499377994))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_11 [(unsigned char)7] = var_5;
        arr_12 [i_3] = ((/* implicit */short) 1538156368);
        arr_13 [i_3] = ((/* implicit */unsigned int) min((((int) (~(((/* implicit */int) arr_10 [i_3]))))), (max(((-(arr_8 [i_3]))), (((/* implicit */int) (unsigned char)254))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_3] [(_Bool)1] [i_5] [i_6] [i_7] [i_5] [(_Bool)1] = ((/* implicit */_Bool) ((unsigned int) (~(var_12))));
                            arr_26 [i_3] [i_4] [i_5] [i_6] [i_7] [i_3] [i_3] = ((/* implicit */int) (_Bool)0);
                            var_15 *= ((/* implicit */int) ((_Bool) (~(((unsigned int) arr_15 [i_3])))));
                        }
                        for (int i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_3] [i_4] [i_5] [(_Bool)0] [i_8] = ((/* implicit */int) (_Bool)1);
                            var_16 |= var_5;
                            arr_30 [i_8] [i_6] [i_4] [i_3] = ((/* implicit */unsigned char) max((max((((((var_9) + (9223372036854775807LL))) << (((((/* implicit */int) arr_18 [i_3] [i_5] [i_5])) - (26350))))), (((/* implicit */long long int) ((unsigned char) var_5))))), (((((/* implicit */_Bool) (~(arr_8 [i_3])))) ? (max((((/* implicit */long long int) (_Bool)0)), (var_9))) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_3] [i_4] [i_5] [i_4])))))));
                            var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) var_8)))))) ? (((/* implicit */int) arr_16 [i_3])) : ((-(min((-588690772), (-1973910369)))))));
                        }
                        arr_31 [i_3] [i_3] [i_3] [i_5] [i_5] [i_6] = var_5;
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) -1073740800)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))))) == (var_9)));
    var_19 = ((/* implicit */long long int) ((((int) ((_Bool) var_2))) >> (((var_3) + (531817618478864077LL)))));
    var_20 = ((/* implicit */int) var_13);
}
