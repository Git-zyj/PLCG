/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231528
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [21U] [i_0])), (158434508)))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))) : (min((2312864743764826973LL), (((/* implicit */long long int) arr_1 [i_0] [i_0])))))))));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) min((((2312864743764826973LL) == (2312864743764826981LL))), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)66))) == (-6516815178211650146LL))))) <= (min((((/* implicit */long long int) var_4)), (var_0))))))))));
        arr_2 [i_0] [i_0] |= ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) -2312864743764826974LL)), (max((13076230322711003062ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_3 [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) <= (((/* implicit */int) ((_Bool) var_14)))));
            arr_7 [i_0] = min((((/* implicit */int) (!(((/* implicit */_Bool) ((7) / (((/* implicit */int) var_3)))))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
        }
        arr_8 [10ULL] [15] = ((/* implicit */unsigned int) var_11);
    }
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        var_19 += (-(((int) (_Bool)1)));
        var_20 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) 2312864743764827001LL))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), ((-(((var_9) + (((/* implicit */unsigned long long int) 2312864743764826974LL))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (3030982964U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164))))) == (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [(signed char)4])) * (((/* implicit */int) arr_12 [i_3])))))));
            /* LoopSeq 1 */
            for (signed char i_5 = 1; i_5 < 16; i_5 += 1) 
            {
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) 2312864743764826974LL))));
                var_24 |= ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_4] [5LL]))));
                var_25 = ((3404594911U) << (((arr_18 [i_3] [i_3]) - (4149584452928217652ULL))));
            }
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_23 [i_3] = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) (unsigned char)189)) >> (((((/* implicit */int) arr_1 [i_6] [i_3])) + (2452))))));
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */long long int) ((arr_14 [i_3]) & (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) > (max((var_0), (((/* implicit */long long int) arr_13 [i_6])))))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-68))))), (3404594911U)))) ? ((+(((((/* implicit */_Bool) var_14)) ? (arr_14 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_18 [i_3] [i_7]) == (arr_18 [i_3] [i_7])))))));
            var_28 = (+((~(((/* implicit */int) var_13)))));
        }
        arr_26 [i_3] = ((/* implicit */short) arr_0 [i_3]);
        var_29 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)128)) && (((/* implicit */_Bool) var_10))))) < (((((/* implicit */int) (_Bool)1)) + (arr_6 [i_3] [i_3] [i_3])))));
        var_30 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((18025367068840341092ULL) << (((419281952U) - (419281905U)))))))))));
        var_31 ^= (-((+(((/* implicit */int) (signed char)48)))));
    }
    var_32 = ((/* implicit */long long int) var_2);
}
