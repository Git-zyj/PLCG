/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217047
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 8; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                            {
                                var_10 = ((/* implicit */long long int) (~((~(arr_9 [8ULL] [i_3 + 2] [(unsigned char)1] [8ULL] [i_0] [i_3 + 2])))));
                                var_11 = ((/* implicit */signed char) ((arr_9 [i_4] [i_4] [i_4] [i_4] [i_3 - 1] [i_1]) * (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned short)7871)))) + (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) arr_6 [i_4] [i_3 - 2] [i_2] [i_2] [i_1] [(_Bool)1]))))))))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                arr_13 [i_0] = (((-((-(((/* implicit */int) arr_12 [i_5] [i_3] [i_2] [i_1] [i_0])))))) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))));
                                arr_14 [(_Bool)1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -7710674092524200364LL)))))) > (7416845183504348934ULL)));
                                arr_15 [i_5] [i_5] [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_6 [i_3 + 3] [i_3 - 3] [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3]);
                                var_12 = ((/* implicit */unsigned char) (-((+((~(1595971619)))))));
                            }
                            for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
                            {
                                var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_1] [i_2] [i_3 + 2] [i_6]))));
                                var_14 = ((/* implicit */signed char) arr_17 [(signed char)3] [i_1] [i_1] [i_1] [i_1]);
                                arr_18 [i_0] [i_1] [i_2] [i_3 + 3] [(unsigned short)1] = (!(((/* implicit */_Bool) 3220978134169371374ULL)));
                                var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_3 + 1])))))));
                            }
                            var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned short)45039)))))))));
                            var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_16 [i_0])))))))));
                            var_18 = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_2 [i_0] [i_3 + 1] [i_3])))) + ((-(((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_3 + 2] [i_1]))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [4ULL] [i_1] [i_1] [i_1] [i_0] [i_1])))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_0);
}
