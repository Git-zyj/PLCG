/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229145
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
    var_15 = ((/* implicit */long long int) var_5);
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_14);
        arr_4 [i_0] |= max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (max((9962745735722982204ULL), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((5929395212834573715ULL) > (((/* implicit */unsigned long long int) 5615712397042785029LL)))))))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) min((((/* implicit */unsigned long long int) 1179337267U)), (arr_6 [i_0 - 1]))))));
            arr_7 [i_1] = ((/* implicit */unsigned int) min((arr_1 [i_0 + 3] [i_1 + 2]), (arr_1 [i_0 + 2] [i_1 - 1])));
            arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (-6450610523575415747LL) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_5 [i_0])), (var_13))))))), (min((((((/* implicit */_Bool) 3243934345U)) ? (14602596603369916867ULL) : (((/* implicit */unsigned long long int) -882413625)))), (7262357786857517730ULL)))));
        }
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_17 += ((/* implicit */int) ((max((min((var_10), (var_10))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 3931364512U)) : (arr_2 [i_2]))))) * (((((/* implicit */unsigned long long int) 4294967277U)) / (arr_6 [i_0 - 2])))));
            arr_12 [i_2] = ((((/* implicit */_Bool) ((arr_6 [i_0 - 1]) & (11899399291883377282ULL)))) ? (11184386286852033885ULL) : (((/* implicit */unsigned long long int) 2314524707U)));
            arr_13 [i_2] [i_2] [7ULL] = ((((/* implicit */_Bool) 2759554614118136522LL)) ? (((/* implicit */unsigned long long int) -6450610523575415750LL)) : (14835592243002256620ULL));
        }
        arr_14 [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_6)) ? (56004568U) : (var_14))), (max((var_14), (1562773324U)))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        arr_18 [i_3] = ((/* implicit */unsigned long long int) min((max((var_13), (3760807761U))), (((/* implicit */unsigned int) ((max((arr_2 [i_3]), (((/* implicit */unsigned long long int) var_8)))) > ((~(var_0))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 3) 
        {
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((((/* implicit */long long int) 3008588062U)) & (arr_11 [10] [i_4 - 2]))) > (((/* implicit */long long int) var_11)))))));
            var_19 ^= ((/* implicit */unsigned int) ((max((5173228951569880897ULL), (arr_10 [i_4 + 1]))) > (((/* implicit */unsigned long long int) ((-9020789426599944155LL) - ((~(9223372036854775807LL))))))));
            var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) ((((-9223372036854775807LL) + (9223372036854775807LL))) << (((3772306480U) - (3772306480U)))))) ? (((((/* implicit */_Bool) arr_6 [i_4 - 1])) ? (arr_5 [i_4 - 2]) : (arr_5 [i_4 - 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4 - 1])))))))));
        }
    }
    var_21 = ((/* implicit */unsigned long long int) var_11);
    var_22 = ((/* implicit */unsigned long long int) 2661381769292562907LL);
}
