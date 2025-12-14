/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224334
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) arr_1 [i_1]);
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 2939537752U)) ? (2939537752U) : (1355429549U))) != (((((/* implicit */_Bool) 2939537747U)) ? (2912539325U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)6151))))))))) : (var_7)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 2; i_2 < 18; i_2 += 4) 
    {
        for (unsigned int i_3 = 2; i_3 < 19; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                {
                    arr_17 [(unsigned short)15] [i_3] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_9 [i_2 - 1])))) <= ((-(min((((/* implicit */long long int) var_6)), (9223372036854775807LL)))))));
                    arr_18 [(_Bool)1] [i_3 + 1] [i_3 + 1] = ((/* implicit */unsigned short) arr_11 [i_2] [i_2]);
                    arr_19 [i_4] [i_4] [i_3] [i_2] = ((/* implicit */long long int) var_6);
                    arr_20 [i_2] [i_3] [16ULL] = ((/* implicit */long long int) var_2);
                    arr_21 [i_2 - 2] [(unsigned char)15] = ((/* implicit */unsigned char) arr_9 [i_2 - 2]);
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */unsigned char) max(((~(((((/* implicit */int) (signed char)-105)) * (((/* implicit */int) var_3)))))), (var_2)));
}
