/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218093
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) max((min(((short)1028), (((/* implicit */short) (unsigned char)7)))), ((short)1019)))) ? (max((((/* implicit */long long int) arr_4 [i_0] [i_1])), (((((/* implicit */_Bool) arr_2 [(short)7])) ? (arr_3 [i_0] [6LL]) : (((/* implicit */long long int) arr_0 [i_0])))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [(_Bool)1])) > ((~(((/* implicit */int) var_0))))))))));
                    arr_10 [i_0] = ((/* implicit */int) arr_5 [(short)8] [i_1] [i_0]);
                    arr_11 [11U] [(unsigned char)11] [(_Bool)1] [i_0] = ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_6 [i_1])))))) ? (min((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */int) arr_4 [i_0] [i_2])) | (((/* implicit */int) arr_8 [16U] [i_1] [(unsigned short)10])))))) : (((((/* implicit */int) (short)-3450)) + (((/* implicit */int) max((((/* implicit */unsigned short) (short)-1029)), ((unsigned short)0)))))));
                    var_12 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)145)), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (6952263487102218690ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) (short)-27866)) : (((/* implicit */int) (short)-1009)));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) (+(min((((/* implicit */int) var_2)), (var_1)))))) : (min(((-(var_4))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))))))))));
    var_14 = ((/* implicit */short) min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-27855))))), (min((var_8), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_3)), (var_7))))))));
    var_15 = ((/* implicit */unsigned short) max((var_1), (((/* implicit */int) var_2))));
}
