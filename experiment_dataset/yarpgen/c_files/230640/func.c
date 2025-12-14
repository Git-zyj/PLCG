/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230640
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0]));
        var_11 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_2 [i_0] [i_0])));
        arr_5 [0] [i_0] = ((/* implicit */unsigned int) (signed char)62);
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_12 ^= ((/* implicit */unsigned short) 0ULL);
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)51501)), (3807381574662251439LL)))) : (18446744073709551597ULL)))));
            var_14 = ((/* implicit */_Bool) max((var_14), ((((_Bool)0) && (((/* implicit */_Bool) (unsigned short)5394))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            arr_14 [i_1] [i_1] = ((/* implicit */unsigned long long int) (((!((_Bool)1))) ? (((/* implicit */long long int) ((arr_0 [i_3]) % (((/* implicit */int) arr_8 [i_1] [i_1]))))) : (((long long int) arr_0 [i_1]))));
            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) min((((long long int) arr_9 [i_1] [i_1] [i_1])), (((/* implicit */long long int) (-(arr_2 [i_1] [i_3])))))))));
            arr_15 [i_1] [i_1] = (_Bool)1;
        }
        var_16 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_9)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [(unsigned short)7] [i_1]))))), (min((var_5), (((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [i_1]))))));
    }
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [22ULL])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_4])) && (((/* implicit */_Bool) (signed char)14))))))) : (((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) arr_1 [i_4]))))));
        var_18 = ((/* implicit */int) arr_10 [i_4] [i_4] [i_4]);
        var_19 *= ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_16 [i_4])) + (((/* implicit */int) arr_6 [i_4]))))));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((18446744073709551613ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!((_Bool)1))))))))))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)115))))))))))));
    }
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)82))))))) ? (((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)14035)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((signed char) 3731330963U))) ? (((/* implicit */int) ((-265707853153131513LL) > (((/* implicit */long long int) ((/* implicit */int) var_8)))))) : (((/* implicit */int) var_8))))));
}
