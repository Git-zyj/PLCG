/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53366
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 1970324836974592ULL)) ? (16383LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30720)))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1]))) : (8LL)))) ? ((~(((16383LL) % (((/* implicit */long long int) ((/* implicit */int) arr_1 [10ULL]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] = ((/* implicit */unsigned int) 13784239172884619310ULL);
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_9))))))) ? (4662504900824932306ULL) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (short)-1))))))));
                            var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-119))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 10682104517273357669ULL)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)165)))))) ? (var_12) : (((/* implicit */unsigned long long int) var_15))))));
    var_21 = (unsigned short)13352;
}
