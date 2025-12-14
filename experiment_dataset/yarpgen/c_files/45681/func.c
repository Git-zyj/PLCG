/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45681
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
    var_10 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 6229411201475853108LL)) | (var_3))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) max((((((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_3 [i_0] [i_1] [i_1]))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11008))))), (((/* implicit */long long int) (unsigned char)255))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) - (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_3] [i_4] [i_0] [i_1]))))), ((+(arr_0 [i_0])))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_0] = ((/* implicit */short) (-(430162845959962278LL)));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    for (unsigned char i_6 = 3; i_6 < 19; i_6 += 3) 
                    {
                        {
                            arr_19 [i_0] [i_1] [i_0] [i_6] = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_1] [i_1] [i_5] [i_0]);
                            arr_20 [i_0] [i_1] [i_0] [i_6] [i_5] [i_0] = min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_3 [i_0] [i_0] [i_5])))), (((((/* implicit */_Bool) var_3)) ? (arr_7 [i_0] [i_1] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) var_0)));
                            arr_21 [i_0] [i_1] [i_5] [i_6] [i_0] = ((/* implicit */int) (+(min((((/* implicit */long long int) (short)-26169)), ((-(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        {
                            arr_26 [i_0] [i_1] [i_7] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3792002485648935322ULL)) ? (3792002485648935306ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12288)))));
                            arr_27 [i_0] [i_7] [i_1] [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_14 [i_0] [i_0 - 1] [i_1 - 1])))) ? (-24LL) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_7 [i_0] [i_0] [i_8]) : (((/* implicit */unsigned long long int) -434830990))))) ? (((var_4) ? (var_8) : (((/* implicit */long long int) 10)))) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_1])))))));
                            var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) != (0U)));
                            arr_28 [i_8] [i_1] [i_0] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */int) var_7)) >> (((/* implicit */int) arr_5 [i_0] [i_0] [i_7]))))) : (((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_7] [i_8]))))))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) ^ (((/* implicit */int) arr_15 [i_0] [i_1] [i_0])))) - (((/* implicit */int) ((unsigned char) arr_0 [i_0]))))))));
                            var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)6064)), (4294967293U)))) ? (((/* implicit */unsigned long long int) (~(var_0)))) : (arr_24 [i_0 - 1] [i_0 - 1] [i_0])))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)226)), ((unsigned short)65508)));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) -430162845959962279LL)) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-122)), ((unsigned char)255)))) : (((/* implicit */int) (signed char)32))))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) (short)(-32767 - 1))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2710789075U)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) (signed char)9))))) : (((long long int) var_8))));
}
