/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20988
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) min(((short)-15782), (((/* implicit */short) var_13)))))))), (max((max((arr_2 [i_0 - 1]), (((/* implicit */unsigned int) (unsigned short)47926)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -5652652021495747999LL)))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (unsigned short)17623))));
            arr_8 [i_0] = ((/* implicit */unsigned char) max((min(((+(((/* implicit */int) (short)-21303)))), (((/* implicit */int) arr_0 [i_0 + 1])))), (((/* implicit */int) arr_0 [i_1]))));
        }
        arr_9 [i_0] [i_0] = ((/* implicit */int) min((((unsigned long long int) (unsigned char)70)), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)123))))), (max((arr_2 [i_0 + 1]), (((/* implicit */unsigned int) (short)-21322)))))))));
        arr_10 [i_0] = ((/* implicit */short) (~(-744318652)));
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((2191787857U), (((/* implicit */unsigned int) ((((/* implicit */int) (short)11611)) / (((((/* implicit */int) (short)-11255)) ^ (1292018075))))))));
    }
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) max((((/* implicit */long long int) (((~(((/* implicit */int) var_3)))) * (((((/* implicit */int) (unsigned short)25736)) / (-744318670)))))), ((+((-(2062742727418124331LL))))))))));
    var_18 = ((/* implicit */unsigned char) var_6);
    var_19 -= ((/* implicit */unsigned short) (+(var_5)));
    var_20 += ((/* implicit */signed char) (short)16934);
}
