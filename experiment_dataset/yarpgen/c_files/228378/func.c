/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228378
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
    var_14 = ((((((/* implicit */unsigned long long int) (+(4890839621192304220LL)))) >= (max((362412999904777960ULL), (((/* implicit */unsigned long long int) -215860455)))))) ? (((/* implicit */int) var_2)) : ((-(((((/* implicit */int) (signed char)66)) << (((((/* implicit */int) (signed char)66)) - (56))))))));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_3) < (var_5))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_9))))) : (((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */unsigned long long int) 1804636166780288548LL)) : (3ULL)))))) ? (((/* implicit */int) (signed char)-79)) : ((((((+(((/* implicit */int) var_7)))) + (2147483647))) >> (((((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) - (6590265165931924251ULL)))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_16 = ((/* implicit */short) arr_2 [i_1] [i_0]);
            var_17 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
        }
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */int) (signed char)0)) % (555845152)))));
            var_19 |= ((/* implicit */short) var_1);
            arr_8 [i_0] [i_0] = ((unsigned int) (((_Bool)0) ? (((/* implicit */long long int) -1203328729)) : (-1597817287194518947LL)));
        }
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (arr_2 [i_0 - 1] [i_0 - 2]) : (((((/* implicit */_Bool) arr_0 [i_3])) ? (var_5) : (var_5)))))) ? (((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-66))) : (4294967288U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((-1597817287194518947LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)159))))))))))));
            arr_13 [i_3] [8LL] |= ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0 - 2] [i_0] [i_3]))));
        }
        var_21 *= (~(4294967288U));
        arr_14 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) (signed char)57))));
        arr_15 [i_0] [i_0] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) min((var_2), (((/* implicit */short) var_9))))))) + (2147483647))) << (((((arr_1 [i_0 - 1]) + (8149724312346093775LL))) - (30LL)))));
    }
    for (short i_4 = 3; i_4 < 17; i_4 += 2) 
    {
        var_22 *= max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_4 - 2])) < (1203328729)))), (min((((/* implicit */unsigned long long int) (unsigned short)38982)), (5294079234942926201ULL))));
        arr_19 [i_4] = ((/* implicit */int) ((unsigned long long int) max(((short)20115), (((/* implicit */short) (signed char)(-127 - 1))))));
        arr_20 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((var_9) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4 - 2] [i_4]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_4 + 1] [i_4])))))));
        arr_21 [i_4] = ((/* implicit */signed char) ((short) (unsigned char)0));
    }
}
