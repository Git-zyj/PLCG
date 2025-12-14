/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19415
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */int) (!(min(((_Bool)1), ((_Bool)1)))));
                var_16 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((7008793221879581392ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9641)))))) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (signed char)(-127 - 1)))))) / ((~(((/* implicit */int) var_5))))))))))));
                arr_6 [(unsigned short)19] = ((/* implicit */unsigned char) (~(((/* implicit */int) max((((var_6) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */int) var_14)) > (((/* implicit */int) var_2)))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */short) ((((((1100565832U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 624895170114229548ULL)) || (arr_2 [i_3]))))))) - (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-45)), (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_3])) ? (((/* implicit */int) arr_7 [i_0] [i_3] [(signed char)19])) : (((/* implicit */int) var_10)))))))));
                            arr_12 [9U] [i_2] = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) (unsigned char)244)), (var_11))) - (((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (((((/* implicit */int) arr_8 [i_0] [i_2] [i_2])) | (arr_1 [i_0]))))))));
                            var_19 = ((/* implicit */unsigned short) arr_1 [i_0]);
                            var_20 *= ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (arr_11 [i_3] [i_2] [i_1] [i_0]))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) arr_0 [i_2]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 -= ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) == (max((((var_13) >> (((/* implicit */int) var_1)))), (((/* implicit */unsigned long long int) ((var_1) || (((/* implicit */_Bool) (unsigned short)15073))))))));
    var_23 -= ((/* implicit */unsigned short) (signed char)-107);
    var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) var_12)))))))));
}
