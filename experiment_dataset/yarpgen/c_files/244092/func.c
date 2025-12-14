/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244092
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((((((/* implicit */int) var_15)) | (((/* implicit */int) (unsigned short)60491)))) & (((((/* implicit */int) var_16)) | (((/* implicit */int) var_0)))))) : (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57146))) >= (var_5)))) + (((((/* implicit */int) (unsigned char)57)) ^ (var_4)))))));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)8390)), (var_17)))) ? (min((970253421569814754ULL), (((/* implicit */unsigned long long int) (unsigned short)60493)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 970253421569814736ULL)) || (((/* implicit */_Bool) (unsigned short)5045)))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_15)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((unsigned int) min((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_17))), (((/* implicit */unsigned long long int) min((arr_0 [i_1] [i_0]), (((/* implicit */long long int) (unsigned short)5042)))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 3; i_2 < 22; i_2 += 2) 
                {
                    var_22 = ((((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 - 1] [i_2 + 1])) ? ((~(var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) >> ((((+(var_19))) - (453691880803898057LL))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_15)), (arr_5 [i_2 + 1] [i_2 - 1] [(unsigned short)18] [i_2 - 2])))) ? (((((/* implicit */_Bool) arr_6 [i_2 - 3] [i_2 - 3] [i_2 - 3])) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 - 2]))) : (var_1)));
                        var_25 += ((/* implicit */unsigned char) var_1);
                    }
                }
                for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [(unsigned char)13])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)57136)) - (((/* implicit */int) var_18))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) + (var_5))))) % (((/* implicit */unsigned int) var_7))));
                    arr_12 [i_0] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((arr_10 [i_1]) + (((/* implicit */int) var_16)))) - (min((26), (arr_10 [i_4])))));
                }
                var_27 = var_2;
                arr_13 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+(((var_3) | (((/* implicit */int) arr_6 [i_0] [i_1] [(unsigned short)14]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_5 = 1; i_5 < 12; i_5 += 2) /* same iter space */
    {
        arr_16 [i_5] [12U] = ((/* implicit */unsigned short) ((unsigned char) ((((((/* implicit */int) var_16)) >> (((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5])))) << ((((+(((/* implicit */int) (unsigned short)60479)))) - (60474))))));
        var_28 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)32766)) << (((((/* implicit */int) (short)22502)) - (22494)))))), (((max((((/* implicit */long long int) 490161323U)), (7386862636487481262LL))) << (((((((((/* implicit */_Bool) (unsigned short)60493)) ? (-9147226646462259422LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60493))))) + (9147226646462259433LL))) - (11LL)))))));
    }
    for (unsigned char i_6 = 1; i_6 < 12; i_6 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((int) arr_11 [i_6] [i_6])) & ((-(((/* implicit */int) arr_18 [i_6]))))))) ? (((((/* implicit */_Bool) arr_0 [i_6 - 1] [i_6 + 1])) ? (min((((/* implicit */unsigned int) arr_1 [i_6])), (arr_5 [i_6 - 1] [i_6] [i_6] [(short)7]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((3804805963U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_15)))))))))));
        var_30 = ((/* implicit */int) ((((/* implicit */unsigned int) min((((/* implicit */int) var_18)), (((((/* implicit */int) (unsigned char)200)) | (((/* implicit */int) var_0))))))) * (max((((unsigned int) var_1)), (((/* implicit */unsigned int) var_12))))));
        var_31 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) / (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6] [i_6 + 1] [i_6 + 1] [i_6]))) | (490161332U))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)254))))))));
        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((-1867317386) >= (((/* implicit */int) var_18)))))))) ? (((/* implicit */unsigned long long int) arr_0 [i_6] [i_6])) : (((var_17) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_6 - 1] [i_6 + 1] [i_6]))))))))));
    }
}
