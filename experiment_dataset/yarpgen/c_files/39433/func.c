/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39433
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [18ULL] &= ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        arr_3 [i_0] = var_3;
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) ((unsigned long long int) arr_5 [i_1]));
        var_20 = ((/* implicit */unsigned char) arr_5 [i_1]);
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 4; i_2 < 12; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 14; i_3 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_3 + 2])) && (((/* implicit */_Bool) var_9)))))) + (((9430482208560120863ULL) + (17039084775024059939ULL)))));
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned short) 3504647203209328207LL);
                        var_24 -= ((/* implicit */int) (~(((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3 + 2] [i_3] [i_3] [i_3 + 1]))) / (arr_8 [2ULL] [2ULL] [i_2])))));
                        arr_12 [i_2] [i_2] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)164)) / (var_5)))) ? ((-(arr_11 [i_1] [i_1] [2LL] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)164))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1])))))) >= (max((((/* implicit */unsigned long long int) arr_9 [i_1])), (9016261865149430748ULL))))))));
                    }
                    var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)0)) ? (3440479547796142393LL) : (-3504647203209328207LL))) < (((/* implicit */long long int) min((arr_0 [9ULL]), (((/* implicit */int) arr_1 [i_2] [i_1]))))))))) >= ((-((-(9016261865149430734ULL)))))));
                    var_26 = ((/* implicit */unsigned short) min((arr_7 [i_2 - 4] [i_2]), (((/* implicit */unsigned long long int) ((signed char) arr_11 [i_2 - 4] [i_2 - 4] [i_3 + 1] [6ULL] [i_3 + 1])))));
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (arr_4 [i_3])));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */_Bool) ((signed char) (unsigned char)156));
    var_29 = ((/* implicit */int) min((((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) : (9430482208560120850ULL))) & (((0ULL) << (((9016261865149430756ULL) - (9016261865149430745ULL))))))), (var_7)));
    var_30 = ((/* implicit */unsigned long long int) ((9430482208560120858ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    var_31 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((711131850U), (((/* implicit */unsigned int) (unsigned char)135))))), (13442415548443364232ULL)));
}
