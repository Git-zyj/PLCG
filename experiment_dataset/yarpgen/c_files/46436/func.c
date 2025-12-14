/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46436
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
    var_10 &= ((/* implicit */long long int) 1174162676);
    var_11 = ((/* implicit */unsigned int) ((((((-8376580954034033393LL) != (4415801451499080219LL))) ? (((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_1))) : (((/* implicit */unsigned long long int) var_0)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_6)))))) > (((var_8) ? (((/* implicit */long long int) 1875474195)) : (-7878719958997525286LL)))))))));
    var_12 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)31))) / ((~(-6LL)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1174162676)) ? (((/* implicit */int) (unsigned short)53950)) : ((~(((/* implicit */int) (_Bool)0))))));
            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) arr_0 [i_0]))));
            var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (var_7) : (arr_1 [i_0] [15ULL]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))));
        }
        for (int i_2 = 2; i_2 < 15; i_2 += 1) 
        {
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) arr_2 [i_2]))));
            var_17 = ((/* implicit */signed char) (unsigned char)89);
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_3]))) : (var_5))) : (max((arr_4 [(signed char)1]), (var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) != (((/* implicit */unsigned long long int) var_3))))))))));
                arr_11 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 7878719958997525290LL)) ? (2147418112LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                var_19 -= ((/* implicit */unsigned long long int) arr_3 [i_0]);
            }
            arr_12 [i_2] [i_2 + 1] = ((/* implicit */signed char) var_3);
        }
    }
}
