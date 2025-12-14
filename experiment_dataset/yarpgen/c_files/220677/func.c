/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220677
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_16 |= ((/* implicit */long long int) (~(274877906944ULL)));
                                arr_15 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) arr_4 [i_0] [i_1]);
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((short) 18446743798831644671ULL));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -1797356785002900272LL)) > (9228870697697576608ULL))))) ^ (((long long int) (~(((/* implicit */int) var_15)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2713719201016596065ULL)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) != (arr_9 [i_0] [i_1] [i_1] [i_6])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 5557947777201123008LL)))))));
                                arr_23 [i_0] [2] [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_5] [i_6])) ? (arr_9 [(_Bool)1] [i_1] [(_Bool)1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32759))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_15))))), (2954698038U))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 22; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            {
                                var_19 += ((/* implicit */long long int) (!(((/* implicit */_Bool) 15733024872692955563ULL))));
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_25 [i_0] [i_2] [i_7] [i_8]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_11);
}
