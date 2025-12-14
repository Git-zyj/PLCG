/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225760
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
    var_15 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((unsigned short) ((int) ((((/* implicit */int) var_9)) & (((/* implicit */int) (unsigned char)193)))))))));
                var_17 = ((/* implicit */long long int) min((min((var_3), (((/* implicit */short) var_7)))), (((/* implicit */short) (!(((/* implicit */_Bool) max(((short)-32741), (((/* implicit */short) var_5))))))))));
                var_18 = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((((/* implicit */int) min(((signed char)-4), ((signed char)26)))), (((-2002901379) ^ (((/* implicit */int) var_2))))))), (-7274582108366849337LL)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (int i_4 = 1; i_4 < 6; i_4 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) (short)14409);
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((unsigned short) min((((/* implicit */short) (signed char)80)), (var_12))))));
                    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((int) var_4)), (((/* implicit */int) ((unsigned short) (short)-32756))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) min((min((min((((/* implicit */unsigned long long int) (short)15888)), (15216005317012422764ULL))), (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */short) var_5))))))), (((/* implicit */unsigned long long int) (signed char)-1))));
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) min((var_14), (((/* implicit */long long int) min((((/* implicit */int) var_4)), (min((((/* implicit */int) var_5)), (var_6)))))))))));
}
