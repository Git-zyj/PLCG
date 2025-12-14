/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36226
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
    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)30720)))))))));
    var_13 &= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) (unsigned short)3491)) | (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)42536), (((/* implicit */unsigned short) (_Bool)0)))))));
                                var_15 = ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)224))))));
                                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned char)95)) * (((/* implicit */int) (signed char)0)))))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_0] [0U] &= ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */short) (_Bool)1)), (min(((short)20346), (((/* implicit */short) (unsigned char)228)))))));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)224)) ? ((+(((var_3) + (((/* implicit */int) var_7)))))) : (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 2 */
                for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    arr_15 [i_0] [i_0] [i_1] [i_5] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) ((signed char) var_3)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 4; i_6 < 15; i_6 += 3) 
                    {
                        arr_18 [i_0] [i_1] [i_6 - 2] [i_5] &= ((/* implicit */short) ((((/* implicit */int) (short)-32752)) + (((((/* implicit */_Bool) (unsigned short)36956)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (_Bool)1))))));
                        var_18 += ((/* implicit */unsigned int) (+(min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_5] [6LL])) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_5] [i_6] [i_6])) : (((/* implicit */int) var_8))))))));
                        var_19 = ((/* implicit */_Bool) 3670016U);
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 15; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 2) 
                        {
                            {
                                var_20 += ((/* implicit */_Bool) arr_2 [i_0] [i_5]);
                                var_21 = ((/* implicit */long long int) 8128U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_9 = 1; i_9 < 16; i_9 += 4) 
                    {
                        for (long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-118)) && (((/* implicit */_Bool) (short)-7650)))))) >= (2034801369U)))), (arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                                var_23 = ((/* implicit */int) (unsigned short)56827);
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_5] [i_9 - 1] [i_10])), (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)-2471)))) : (min((arr_11 [i_0] [i_1] [i_5] [i_9 + 2] [i_10]), (arr_11 [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0] [i_0])))));
                            }
                        } 
                    } 
                }
                for (short i_11 = 1; i_11 < 16; i_11 += 2) 
                {
                    var_25 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)-29589)) % (((/* implicit */int) (short)32767))))) >= (2034801360U)))), ((+(((/* implicit */int) max((((/* implicit */short) (unsigned char)212)), (arr_0 [i_0]))))))));
                    var_26 = ((/* implicit */int) ((_Bool) (~((-(((/* implicit */int) (_Bool)0)))))));
                    arr_35 [i_0] [i_1] [i_1] = 2147483647;
                }
                /* LoopNest 2 */
                for (short i_12 = 1; i_12 < 17; i_12 += 4) 
                {
                    for (int i_13 = 2; i_13 < 14; i_13 += 2) 
                    {
                        {
                            arr_40 [i_0] [i_1] = ((/* implicit */unsigned char) var_10);
                            arr_41 [i_0] [i_1] [i_0] = (~(((((/* implicit */int) (signed char)1)) ^ (((/* implicit */int) (signed char)-2)))));
                            arr_42 [i_0] [i_0] [i_13] [i_13] [i_13] |= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65527)) >> (((((/* implicit */int) (unsigned char)182)) - (160)))));
                            arr_43 [i_13] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)168)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_32 [i_0] [i_0] [i_12] [i_12 + 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) var_9);
    var_28 = ((/* implicit */int) min((var_9), (((/* implicit */unsigned long long int) var_5))));
}
