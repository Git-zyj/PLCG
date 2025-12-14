/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249786
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
    for (long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_10 += ((/* implicit */signed char) min((((((/* implicit */_Bool) 623399529690253631ULL)) ? (17823344544019297988ULL) : (17823344544019297985ULL))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)(-32767 - 1))))))));
                var_11 = ((/* implicit */short) (unsigned char)140);
                var_12 = ((/* implicit */long long int) (-((((!((_Bool)1))) ? ((~(((/* implicit */int) (short)30063)))) : (((/* implicit */int) (short)(-32767 - 1)))))));
            }
        } 
    } 
    var_13 += ((/* implicit */short) min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 768273402)), (623399529690253647ULL)))))))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)234))))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)45453)) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) (signed char)-55)))))))));
    var_15 = ((/* implicit */long long int) (unsigned short)11675);
}
