/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210536
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] = ((/* implicit */_Bool) var_0);
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                var_13 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((arr_3 [i_2]) - (arr_3 [i_2])))), (max((((/* implicit */long long int) arr_0 [i_2])), (var_10)))));
                arr_9 [i_2] [i_1] [i_2] &= ((/* implicit */signed char) ((unsigned int) min((arr_0 [i_2]), (arr_0 [i_2]))));
            }
            var_14 |= ((/* implicit */unsigned int) ((long long int) (+(442096926))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) ((signed char) var_3))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) -2189118346599415110LL)) : (arr_7 [i_0] [i_3] [i_0])))))));
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)10))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-12810))))) ? (max((((/* implicit */int) (signed char)10)), (-1390145369))) : (arr_5 [i_0] [i_3] [i_3])));
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(2147483647)))) ? (((((((/* implicit */_Bool) -201102515)) ? (((/* implicit */int) (_Bool)0)) : (761754301))) | (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) var_2))));
            var_16 = ((/* implicit */int) (unsigned char)252);
        }
        arr_14 [6U] |= ((((/* implicit */unsigned long long int) 432633846)) > (11831127144859630988ULL));
        var_17 = ((/* implicit */unsigned short) (_Bool)0);
    }
    for (unsigned char i_4 = 1; i_4 < 9; i_4 += 4) 
    {
        arr_18 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_4])) || (var_2)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4])) && (((/* implicit */_Bool) 745980502)))))))) ? (((/* implicit */int) ((signed char) arr_1 [18U]))) : ((~((~(((/* implicit */int) var_12))))))));
        var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) var_10)) ? (201102494) : (((/* implicit */int) (signed char)10))))));
        arr_19 [i_4] [i_4] &= ((/* implicit */_Bool) (signed char)-114);
        arr_20 [i_4] = ((/* implicit */unsigned long long int) ((unsigned int) min((arr_16 [i_4 - 1]), (((/* implicit */long long int) -1940459678)))));
        var_19 = ((/* implicit */signed char) (-((((((-(arr_15 [i_4]))) + (2147483647))) << ((((((-(((/* implicit */int) var_1)))) + (37))) - (21)))))));
    }
    var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) -8925434434265048515LL)) && (((/* implicit */_Bool) -540095079)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) (short)32766))))))) : (var_7)));
}
