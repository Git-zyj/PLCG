/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223502
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_1] = ((/* implicit */short) var_3);
                            arr_14 [i_0] [i_0] [i_2] = ((int) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */int) (unsigned char)21))));
                            arr_15 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_11 [i_3] [i_1 + 1] [i_3] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
                            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) min((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)21))))), ((+(arr_1 [i_2] [i_2]))))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)32))))) >> (((((/* implicit */int) arr_8 [i_0] [i_1 - 1])) - (20449)))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 14; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (int i_6 = 1; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_27 [i_0] [i_0] [9] [9] = ((/* implicit */unsigned char) min(((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)121)) != (((/* implicit */int) (unsigned char)235))))) : (((/* implicit */int) (unsigned char)235)))), ((+(((((/* implicit */_Bool) (unsigned char)248)) ? (-1312977089) : (((/* implicit */int) arr_17 [i_4] [i_4]))))))));
                                arr_28 [i_0] [i_0] [i_6] [i_6] [i_4] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned short)9), (((/* implicit */unsigned short) (unsigned char)95))))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_4])) > (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_0] [i_5] [i_0])) : (((/* implicit */int) (unsigned char)11))))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1312977073)) ? (var_10) : (((/* implicit */int) arr_0 [i_0]))))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)128)))), (((/* implicit */int) (signed char)-86)))), (((((/* implicit */_Bool) arr_4 [i_1] [i_1] [(unsigned char)9])) ? (((/* implicit */int) ((((/* implicit */int) arr_17 [i_0 + 1] [i_1 - 1])) != (var_13)))) : (arr_4 [i_1] [i_1] [i_1]))))))));
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            {
                                arr_35 [i_0] [i_0] [i_0] [i_8] [i_0] = 2147483647;
                                var_19 = ((/* implicit */signed char) ((short) ((((min((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */int) arr_10 [i_1])))) + (2147483647))) << (((((/* implicit */int) max((((/* implicit */short) var_8)), ((short)32764)))) - (32764))))));
                                var_20 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_23 [(signed char)5] [i_1] [i_7] [i_7] [i_9])) ? (((/* implicit */int) ((signed char) (unsigned char)11))) : (((int) var_13)))) <= (((255) ^ (min((((/* implicit */int) arr_25 [i_9] [i_8] [i_7] [i_1] [i_1 - 1] [i_0])), (1312977100)))))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_5 [0]) : (642299222)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)85)) << (((((/* implicit */int) arr_9 [i_0] [i_0 + 3] [i_0])) - (60))))))))) : (min((((((/* implicit */int) (unsigned char)46)) | (((/* implicit */int) (unsigned char)235)))), ((-(((/* implicit */int) arr_25 [i_0] [4] [i_7] [i_8] [(signed char)5] [i_8])))))))))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)118)) ? ((~(min((arr_5 [i_0]), (((/* implicit */int) (unsigned char)244)))))) : (min((((((/* implicit */_Bool) arr_10 [i_9])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_16)))), (((/* implicit */int) (unsigned char)6))))));
                            }
                        } 
                    } 
                } 
                var_23 = var_14;
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) var_14)) || ((!(((/* implicit */_Bool) (unsigned short)24158))))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) 1466510307)) && (((/* implicit */_Bool) (short)5991))))) : (((/* implicit */int) ((((/* implicit */int) (short)-5982)) == (-1174544546)))))))))));
}
