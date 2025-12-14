/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215503
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
    for (long long int i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) (+(994226612)));
                arr_7 [i_0] = ((/* implicit */int) (_Bool)0);
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (short)32388)) ? (max((((/* implicit */long long int) arr_6 [i_0 + 2])), ((~(1359623240344718380LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((((/* implicit */int) var_13)) - (((/* implicit */int) var_18)))) : (((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) (short)-21297)))))))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 127473349425033950ULL)) ? (-1865357562) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))) ? (max(((+(127473349425033950ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)22198)) ? (984939435U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)53)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((1865357561) > (((/* implicit */int) var_12)))) ? (9708053056161913009ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-39))))) ^ (((((/* implicit */_Bool) 127473349425033947ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57347))) : (var_17))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((1865357561) - (((/* implicit */int) var_0))))) != (((((/* implicit */_Bool) 1359623240344718390LL)) ? (10817432717843856025ULL) : (((/* implicit */unsigned long long int) 17454747090944LL))))))))));
    var_23 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((2387808271789588990LL) & (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))));
}
