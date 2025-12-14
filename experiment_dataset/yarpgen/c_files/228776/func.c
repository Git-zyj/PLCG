/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228776
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
    var_13 = ((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned int) (+((~(((/* implicit */int) (signed char)102))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((_Bool) var_6));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((signed char) arr_6 [3LL] [1ULL] [i_2] [i_2]))) : ((~(((/* implicit */int) (unsigned short)54921))))))) ? (((/* implicit */unsigned long long int) 0U)) : (var_6)));
                }
            } 
        } 
        var_16 = ((unsigned short) (((_Bool)1) || (((/* implicit */_Bool) ((unsigned short) arr_0 [i_0])))));
    }
    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) arr_8 [i_3]))))));
        var_18 = ((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_3]))))));
    }
    for (signed char i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) 3558543234U);
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                {
                    arr_18 [i_4] [i_6] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_6])) ? (((/* implicit */int) arr_17 [i_4] [i_5] [i_6])) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) -850983003))));
                    var_20 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? ((-(var_4))) : (min((736424049U), (((/* implicit */unsigned int) var_11)))))));
                    var_21 = ((/* implicit */int) ((unsigned int) (((_Bool)1) ? ((-(arr_14 [19LL]))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))))));
                    var_22 = ((/* implicit */long long int) arr_12 [i_5] [i_5] [i_6]);
                    arr_19 [i_6] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 1612745707775100232LL)) ? (((/* implicit */int) (unsigned short)62690)) : (((/* implicit */int) (unsigned short)16534)))), (((/* implicit */int) var_1))));
                }
            } 
        } 
        var_23 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */unsigned long long int) arr_5 [i_4] [i_4] [i_4] [i_4])) : (min((var_10), (((/* implicit */unsigned long long int) (signed char)5))))))));
    }
    for (signed char i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
    {
        arr_22 [i_7] = ((/* implicit */signed char) var_0);
        arr_23 [(signed char)19] [i_7] = ((/* implicit */unsigned short) max(((~(((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (_Bool)1)))))), ((((!((_Bool)0))) ? (((/* implicit */int) arr_12 [i_7] [i_7] [i_7])) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))))));
        var_24 = ((/* implicit */int) ((long long int) min((((/* implicit */unsigned int) arr_3 [i_7])), (0U))));
    }
    var_25 = ((/* implicit */long long int) (_Bool)0);
    var_26 = ((/* implicit */_Bool) (+((+(((/* implicit */int) ((unsigned short) var_1)))))));
}
