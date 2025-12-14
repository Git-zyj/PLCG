/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35441
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
    var_14 = ((/* implicit */short) var_6);
    var_15 = ((/* implicit */short) ((((/* implicit */int) var_5)) | (((((_Bool) 3689668815U)) ? (((/* implicit */int) (unsigned char)101)) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)28734)) : (((/* implicit */int) (unsigned char)85))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_7 [(unsigned char)11] [(unsigned char)11] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) var_5)) : (var_8))), ((-2147483647 - 1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)1268), (((/* implicit */unsigned short) (short)3621)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 892080110)) ? (((/* implicit */int) var_1)) : (arr_1 [i_1])))) ? ((~(4166591287U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1])))))));
                    arr_8 [i_0] [(signed char)9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) arr_6 [i_1] [(short)8])), (var_6)))))) && (((/* implicit */_Bool) ((unsigned long long int) (unsigned char)113)))));
                    arr_9 [i_0] = (!(((/* implicit */_Bool) (~(6111277046667409576LL)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        arr_14 [(unsigned short)3] [i_1 - 1] [i_1 - 1] [(unsigned short)3] [2] [i_1 - 1] = arr_4 [(unsigned char)12] [(short)2] [i_0];
                        arr_15 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned short) ((arr_1 [(short)12]) != (-1293752468)))), (min(((unsigned short)52537), (((/* implicit */unsigned short) (_Bool)0))))));
                        arr_16 [i_0] [i_1] [(signed char)7] [(signed char)7] [i_0] [7U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (7499233042657602470LL) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)237)), (-892080110))))))) ? (((/* implicit */int) arr_2 [i_0])) : ((~(arr_3 [i_0 - 1])))));
                    }
                }
            } 
        } 
    } 
}
