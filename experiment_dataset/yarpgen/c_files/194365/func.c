/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194365
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
    var_18 = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1 + 2] = ((/* implicit */long long int) -1195541928);
                var_19 = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))), ((_Bool)1)));
                var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1 + 2] [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (~(((/* implicit */int) (_Bool)1))))))) ^ (max((max((((/* implicit */long long int) arr_1 [i_0])), (var_2))), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_6)), (arr_5 [i_0] [i_0] [i_3]))))))));
                            arr_15 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_13))))))) | (((((/* implicit */_Bool) 6213921192243696199ULL)) ? (arr_9 [i_1 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1 + 2] [i_3 + 2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_19 [i_4] [i_4] = ((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))))) ? (((((-467046015) & (((/* implicit */int) (_Bool)0)))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_4]))))))) : (((/* implicit */int) max(((_Bool)1), (var_8))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) (+((((_Bool)1) ? (((/* implicit */int) arr_12 [(_Bool)1] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5]))))));
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_23 ^= ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (unsigned short)2)))));
            arr_26 [2U] [i_6] [i_5] = ((/* implicit */signed char) (unsigned short)65520);
            arr_27 [(unsigned short)14] [(unsigned short)14] [i_6] = ((/* implicit */signed char) ((var_12) != (((((/* implicit */_Bool) (-(var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5] [i_6]))) : ((+(var_12)))))));
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            var_24 = ((/* implicit */short) (((-(5085253445869028223LL))) < (((((/* implicit */_Bool) 134217727U)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            var_25 = ((/* implicit */long long int) var_16);
        }
        var_26 = ((/* implicit */unsigned int) (+((+(arr_21 [i_5])))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 1; i_8 < 19; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        for (signed char i_11 = 0; i_11 < 20; i_11 += 1) 
                        {
                            {
                                arr_42 [i_5] [i_9] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)60030))))) ? ((+(((/* implicit */int) (_Bool)0)))) : (max((var_11), (((/* implicit */int) arr_5 [i_9] [i_9] [i_9])))))))));
                                arr_43 [i_9] = ((/* implicit */_Bool) 1825303649951950448ULL);
                                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((short) var_11))))) ? (((/* implicit */int) (((~(var_14))) < (((arr_32 [i_9] [5ULL]) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50970)))))))) : (((/* implicit */int) arr_38 [i_10])))))));
                                arr_44 [i_9] [(_Bool)0] [i_9 + 1] [i_9 + 1] [i_9 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) (_Bool)1)) : (var_11)))) ? (2147483647) : ((~(((/* implicit */int) (unsigned short)14576))))))) ? (max((((/* implicit */int) (short)32767)), ((-(((/* implicit */int) (short)-6052)))))) : (((/* implicit */int) (unsigned short)46356))));
                                var_28 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((unsigned long long int) var_15)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_5] [i_8]))))));
                            }
                        } 
                    } 
                    arr_45 [i_9] [4U] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_5] [i_5])) ? (((((/* implicit */unsigned long long int) 402125378657117412LL)) | (16621440423757601178ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                }
            } 
        } 
        arr_46 [(short)10] [(short)10] = ((/* implicit */short) (~(min((((/* implicit */int) ((unsigned char) 402125378657117408LL))), (max((((/* implicit */int) arr_0 [(short)13])), (-840766305)))))));
    }
}
