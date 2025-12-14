/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247148
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_17)) / (var_15)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 6; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 8; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((long long int) arr_3 [i_2 - 1] [i_1 + 1])) : (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_1 - 1] [i_2 + 2] [i_3] [i_3])))))));
                                var_21 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_14 [i_4] [i_3] [i_2] [i_1] [i_0])))), (((((/* implicit */long long int) ((/* implicit */int) var_18))) < (7357517626451552739LL))))))) > (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)65)) || ((_Bool)1)))), (((((/* implicit */_Bool) 2091464967570986105LL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3])))))))));
                                var_22 = ((/* implicit */short) (unsigned short)60571);
                            }
                            var_23 = ((/* implicit */signed char) arr_9 [i_1 + 2] [i_1 + 4] [i_2 - 1] [i_1 + 2] [i_2 + 2]);
                            var_24 &= var_18;
                            var_25 -= ((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)77)))) + ((((_Bool)1) ? (((/* implicit */int) (short)-32753)) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                var_26 = (~(arr_3 [i_0] [i_1 - 1]));
                var_27 = ((/* implicit */int) ((unsigned long long int) (_Bool)1));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 1; i_5 < 13; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_28 -= ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_15 [i_5 + 1])), (((12402158050179209390ULL) << (((((/* implicit */int) arr_17 [(short)4])) - (27325)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)54)) | (((/* implicit */int) (unsigned short)53084))))) ? (((/* implicit */unsigned long long int) (~(var_15)))) : (13662622423696485840ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_15 [i_5 - 1])))));
                var_29 = ((/* implicit */long long int) arr_16 [i_5]);
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) 2074647253);
}
