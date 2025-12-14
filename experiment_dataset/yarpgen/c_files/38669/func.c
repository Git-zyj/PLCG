/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38669
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_11 = ((/* implicit */long long int) (short)-14057);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-14048)) | (((/* implicit */int) (unsigned short)30846)))) - (((/* implicit */int) var_9))));
                        var_13 -= ((/* implicit */long long int) var_1);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        var_14 |= ((/* implicit */signed char) (+((~(((/* implicit */int) (signed char)-1))))));
                        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
                        arr_13 [i_0] [(unsigned char)8] [(_Bool)1] [(signed char)1] = ((/* implicit */_Bool) (signed char)-1);
                    }
                }
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_7)) >= (var_3))))));
                arr_14 [1] [(unsigned short)3] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((int) var_6)) | (((/* implicit */int) (short)14056))))) ? (((/* implicit */int) ((((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) : (((/* implicit */int) var_6))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((var_17), (((unsigned short) (short)14047))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((long long int) (short)13699)), (((/* implicit */long long int) (short)14058))))) || (((/* implicit */_Bool) 8449784436752340693ULL))));
                    arr_22 [14U] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) ((((((/* implicit */int) (short)-14059)) + (2147483647))) >> (((578582976U) - (578582974U))))))) / (((/* implicit */int) (short)14057))));
                    arr_23 [(_Bool)1] [(_Bool)1] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((var_0) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) - (((((/* implicit */unsigned long long int) 0U)) / (var_8)))));
                }
                var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (signed char)110)), (var_10)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */unsigned long long int) var_4)) * (var_0))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (max((var_0), (((/* implicit */unsigned long long int) 4294967282U))))))));
}
