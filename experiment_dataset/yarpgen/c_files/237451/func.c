/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237451
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            arr_10 [6LL] [9U] [i_1] [i_1] = ((/* implicit */unsigned long long int) 4121848089874855735LL);
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) == (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_14))) % (var_8)))) || (((/* implicit */_Bool) var_10)))))));
                        }
                    } 
                } 
                arr_12 [(_Bool)1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1])) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)13))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-3))) : (((((/* implicit */_Bool) var_11)) ? (var_7) : (var_7)))));
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 22; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        {
                            var_15 |= ((/* implicit */unsigned short) ((signed char) ((max((((/* implicit */int) arr_15 [i_0])), (var_1))) < (((/* implicit */int) var_13)))));
                            var_16 = ((/* implicit */_Bool) ((unsigned short) (!((!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [(unsigned short)24])))))));
                            var_17 ^= (-((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-15740))))))));
                            var_18 += ((((/* implicit */int) var_13)) / (((/* implicit */int) var_14)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_14);
    var_20 = ((/* implicit */signed char) min((var_20), (((signed char) (-(((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (signed char)13))))))))));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_7))));
}
