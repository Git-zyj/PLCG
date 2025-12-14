/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33971
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
    for (long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_14 = ((/* implicit */int) (-(((((/* implicit */_Bool) (~(var_10)))) ? ((-(arr_1 [i_0]))) : (((/* implicit */unsigned long long int) max((var_3), (var_7))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned long long int) 882826937U);
                        var_16 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_1] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_2]))))) ? (var_4) : (((/* implicit */unsigned long long int) arr_7 [i_0 + 1] [i_2] [i_0 + 1] [i_3]))))) ? (max((max((var_1), (((/* implicit */long long int) arr_4 [i_0 + 1])))), (((/* implicit */long long int) arr_2 [i_0 + 2])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_13) >> (((/* implicit */int) arr_2 [i_2]))))))))));
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */long long int) var_2)) - (var_1)))))) ? (var_1) : (((/* implicit */long long int) max((882826917U), (((/* implicit */unsigned int) 24785983)))))));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 882826937U)) ? (((/* implicit */unsigned long long int) arr_4 [i_0 - 2])) : ((-(11971557082005361164ULL)))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 1; i_4 < 22; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                {
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) 3412140367U)), (1ULL))) < ((~(((arr_13 [i_4 - 1]) & (((/* implicit */unsigned long long int) var_3)))))))))));
                    var_20 = max((((/* implicit */unsigned long long int) var_0)), (min((max((((/* implicit */unsigned long long int) var_6)), (var_12))), (((/* implicit */unsigned long long int) (-(var_7)))))));
                    var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_4 + 1] [i_4 + 2] [i_4 + 2] [i_4 + 1])) ? (3269341825149368201LL) : (arr_15 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 - 1])))), (((((/* implicit */_Bool) ((var_3) / (var_11)))) ? (((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)1732))))))));
                    arr_17 [i_4] [i_4] [i_4] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min((3412140377U), (((/* implicit */unsigned int) (unsigned char)249))))) ? (max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_14 [18])), (var_13)))), ((+(arr_11 [i_5]))))) : (((((/* implicit */_Bool) min((arr_11 [i_5]), (((/* implicit */long long int) (_Bool)1))))) ? (max((-3514953377273005712LL), (((/* implicit */long long int) arr_12 [(unsigned short)4] [i_5] [i_6])))) : (((/* implicit */long long int) max((arr_12 [i_4 + 1] [i_5] [i_6]), (((/* implicit */int) arr_16 [i_5] [i_5] [i_5] [i_5])))))))));
                }
            } 
        } 
        arr_18 [i_4] [i_4] = ((/* implicit */long long int) max((3123265582726069478ULL), (0ULL)));
    }
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        for (int i_8 = 3; i_8 < 20; i_8 += 3) 
        {
            {
                arr_25 [i_7] [i_7] [(_Bool)1] = ((/* implicit */unsigned int) arr_24 [i_7] [i_8 - 3] [i_8]);
                arr_26 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (1323402603U) : (882826912U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_8] [i_8 + 2] [i_8 + 3])) ? (var_1) : (((/* implicit */long long int) arr_12 [i_8] [i_8 + 2] [i_8 + 3]))))) : (((((/* implicit */_Bool) (+(11333235404824229083ULL)))) ? (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_22 [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
            }
        } 
    } 
}
