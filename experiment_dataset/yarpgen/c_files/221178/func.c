/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221178
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
    for (short i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) var_2);
                            arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) ((long long int) min((((/* implicit */unsigned int) ((int) var_2))), (min((((/* implicit */unsigned int) arr_6 [(short)7] [i_2] [i_2 + 2] [i_2])), (arr_5 [i_0 - 3] [i_1] [(unsigned char)0] [i_1]))))));
                            arr_11 [i_0] [i_2] [i_1] [8] = ((/* implicit */int) max((((short) arr_7 [i_3 - 3] [(signed char)11] [i_3 + 1] [(short)4] [i_3 - 2] [i_3 + 2])), (((/* implicit */short) ((((/* implicit */int) (unsigned char)46)) == (((/* implicit */int) (unsigned char)12)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) -6618349686656190728LL))))) < (((/* implicit */int) var_2))));
                            arr_19 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_9 [i_4] [i_0 + 1] [i_1] [i_5])) ? (((/* implicit */int) arr_9 [i_0] [i_0 + 2] [i_4] [i_5])) : (((/* implicit */int) var_9)))));
                            var_15 = ((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_5] [i_0 - 1] [i_0 - 3])) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_5] [i_0 - 4] [i_0 - 2])) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 - 2] [i_5] [i_0 - 2] [i_0 + 2])) > (((/* implicit */int) var_2))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */short) max(((-(((/* implicit */int) max((((/* implicit */short) (signed char)-112)), ((short)32753)))))), (((/* implicit */int) var_9))));
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_6))));
    /* LoopNest 2 */
    for (short i_6 = 1; i_6 < 17; i_6 += 4) 
    {
        for (short i_7 = 2; i_7 < 16; i_7 += 3) 
        {
            {
                var_18 -= ((/* implicit */long long int) min(((-(((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (short)(-32767 - 1))))))), (min(((-(((/* implicit */int) (unsigned char)100)))), (((/* implicit */int) max((((/* implicit */short) var_5)), (arr_20 [(unsigned char)14] [i_7]))))))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-31171))) * (4294967290U)));
            }
        } 
    } 
    var_20 = var_9;
}
