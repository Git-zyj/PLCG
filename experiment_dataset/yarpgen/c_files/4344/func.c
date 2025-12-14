/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4344
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
    var_19 = ((/* implicit */short) (-((~(((/* implicit */int) (unsigned char)92))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 += ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0 + 2] [i_0 - 1]))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)19188)) : (((/* implicit */int) var_12))))));
                var_21 += ((((/* implicit */_Bool) (+((+(arr_1 [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) + (((/* implicit */int) (_Bool)1))))) + (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_1])))))) : (max((((((/* implicit */_Bool) arr_0 [(short)0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13))) : (var_5))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) (short)18292)) : (arr_1 [i_1])))))));
                var_22 = ((/* implicit */unsigned char) (-(max((((arr_3 [(unsigned char)0] [(unsigned short)5]) | (((/* implicit */long long int) ((/* implicit */int) (short)4704))))), (((/* implicit */long long int) ((((/* implicit */int) (short)-2044)) * (((/* implicit */int) var_16)))))))));
                var_23 = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 15; i_2 += 2) 
    {
        for (unsigned char i_3 = 3; i_3 < 14; i_3 += 1) 
        {
            {
                var_24 &= ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_3])), (min((var_7), ((unsigned char)5)))))) % (var_14)));
                var_25 = ((/* implicit */long long int) (unsigned short)256);
                var_26 = ((/* implicit */long long int) (((-(((/* implicit */int) arr_8 [i_2] [i_2 - 1])))) * (((/* implicit */int) arr_8 [i_2] [i_3]))));
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_4 [i_2 - 2]) ? (max((((/* implicit */long long int) 3915255420U)), (4503599090499584LL))) : (((/* implicit */long long int) arr_5 [i_2 - 1] [i_2 - 1]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [(unsigned char)11]))))) : (((max((-6567235290148437739LL), (((/* implicit */long long int) arr_5 [i_2] [i_3])))) / (((/* implicit */long long int) ((/* implicit */int) min((arr_6 [i_2] [i_3 - 3]), (((/* implicit */unsigned short) (unsigned char)142))))))))));
                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((14551501035158801883ULL), (((/* implicit */unsigned long long int) (short)-512))))) ? (((/* implicit */int) ((unsigned char) var_4))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_3])))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3 + 2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_6 [(_Bool)1] [(_Bool)1]), (((/* implicit */unsigned short) (unsigned char)80)))))) : (min((var_8), (((/* implicit */long long int) (unsigned char)0))))))))))));
            }
        } 
    } 
}
