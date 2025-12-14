/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208292
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
    var_15 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 14688792984329658480ULL)) ? (((/* implicit */unsigned long long int) var_4)) : (var_7)))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) ((short) (signed char)1))), ((~(((/* implicit */int) var_11))))))) : (((((/* implicit */_Bool) var_14)) ? (var_10) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_5), (((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) ? (min((((/* implicit */long long int) ((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)12427))) : (2U)))), ((+(var_4))))) : (((/* implicit */long long int) min((var_9), (var_9))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) (~(var_7)));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (unsigned int i_3 = 3; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [17U] [i_2] [i_0] [9U] [i_0] = ((/* implicit */unsigned char) var_3);
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned char) (~(4294967275U)));
                            arr_17 [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_13)) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))), (((((/* implicit */_Bool) 2581644123U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_1] [i_2]))))));
                            var_19 *= ((/* implicit */unsigned short) (+(min((3114889896U), (((/* implicit */unsigned int) var_14))))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_9);
                        }
                        arr_19 [i_1] [i_0] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2581644123U))))), ((~(max((((/* implicit */unsigned long long int) var_9)), (var_7)))))));
                    }
                } 
            } 
        } 
        var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(3757951089379893135ULL)))) ? (min((((((/* implicit */_Bool) arr_0 [(unsigned short)2])) ? (15169643815964094693ULL) : (((/* implicit */unsigned long long int) arr_2 [(signed char)16])))), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) (~(min((var_10), (((/* implicit */unsigned int) var_13)))))))));
    }
    var_21 -= ((/* implicit */unsigned int) var_11);
}
