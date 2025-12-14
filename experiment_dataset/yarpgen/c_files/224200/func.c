/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224200
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */short) ((((14771843810897881976ULL) < (var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [(unsigned char)14])))) : ((-(3674900262811669657ULL)))));
        var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((2800144885U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36343)))))) ? (arr_2 [i_1] [(unsigned short)11]) : (((/* implicit */long long int) ((((/* implicit */unsigned int) var_5)) + (15728640U))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                {
                    var_14 = (!(((/* implicit */_Bool) (unsigned short)49433)));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) (_Bool)1);
                                var_16 = ((/* implicit */short) min((var_16), ((short)-27463)));
                                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_3] [i_2 - 1] [i_2 - 1] [16U]))))))));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_9 [i_5] [i_5] [i_5] [i_5]))));
                                var_19 = ((/* implicit */unsigned int) ((unsigned char) 3674900262811669639ULL));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        var_20 = ((/* implicit */short) (+(arr_24 [i_1] [i_6] [i_7] [i_8])));
                        arr_26 [(short)5] [i_1] [i_6] [i_6] [i_7] [i_8] = ((/* implicit */signed char) ((((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) <= (((/* implicit */unsigned long long int) ((int) arr_21 [(unsigned short)18] [(short)3] [i_7] [i_7])))));
                        var_21 = ((/* implicit */long long int) var_1);
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            var_22 = (unsigned short)14508;
                            arr_29 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((var_8) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)74)))))) + (((/* implicit */int) (unsigned short)17189))));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_8] [i_7] [i_6] [i_1]))) & (14771843810897881979ULL))))))));
                        }
                    }
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)50095))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_7] [i_7] [i_6] [i_1] [i_1]))) : (var_9)));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) (signed char)108))))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (max((var_5), (((/* implicit */int) (unsigned char)255))))))), (min((((/* implicit */unsigned int) var_6)), (var_1)))));
}
