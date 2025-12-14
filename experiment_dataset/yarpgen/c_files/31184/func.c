/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31184
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
    var_20 = ((/* implicit */int) ((((((var_12) + (var_12))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) == (((/* implicit */long long int) ((/* implicit */int) var_17)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    var_21 = (+(((((/* implicit */_Bool) (~(arr_6 [i_0] [i_1])))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-58)))));
                    arr_7 [i_0] [i_1] [i_1] [(short)4] = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)8290)) ? (((/* implicit */int) (signed char)63)) : (var_9))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32766)))))))), (3097872826110320683LL)));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_11 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned short)19877))))))) | (((((/* implicit */_Bool) ((-3097872826110320708LL) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (arr_2 [i_1 - 1] [i_1 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)57245)) ? (-1956391285804657639LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
                    var_22 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_3 [i_1 + 1])))) + (min((((/* implicit */int) ((((/* implicit */int) (signed char)-73)) == (((/* implicit */int) arr_9 [(signed char)0] [(signed char)0] [(signed char)0]))))), ((-(((/* implicit */int) arr_0 [i_0]))))))));
                    var_23 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)-71)) ? (15795742214130205059ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 2])))))));
                    var_24 = ((/* implicit */long long int) var_5);
                    arr_12 [i_0] [3] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((min((arr_1 [i_0] [i_1 - 1]), (((/* implicit */unsigned int) arr_4 [i_3] [i_3] [i_3] [i_3])))) & (1036075361U)))), ((~(((((/* implicit */_Bool) 3097872826110320708LL)) ? (((/* implicit */unsigned long long int) 1205854920)) : (3564407592299779533ULL)))))));
                }
                for (long long int i_4 = 1; i_4 < 13; i_4 += 4) 
                {
                    arr_15 [i_1] [i_0] [i_1] [i_1] = ((/* implicit */short) 14882336481409772082ULL);
                    var_25 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-58)), ((unsigned short)57245)));
                }
                arr_16 [i_1] = ((/* implicit */unsigned short) -1956391285804657639LL);
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 4) 
                {
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) + (var_18)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16969)))))) ? (((/* implicit */int) (unsigned short)8290)) : (((/* implicit */int) (signed char)86)))) : (((((((((/* implicit */_Bool) (short)16354)) ? (((/* implicit */int) arr_4 [i_5] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))) + (2147483647))) << (((var_19) - (6187411565911760188ULL)))))));
                    arr_19 [i_1] = ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned short)8274)))) == ((-(((/* implicit */int) var_10))))));
                }
                for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    arr_22 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((21U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_6])))))) ? (((((/* implicit */_Bool) (unsigned char)169)) ? (861441071692593229LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) + ((-(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))) | (var_6)))))));
                    var_27 = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */short) var_5)), (var_4)))), ((~(((/* implicit */int) arr_4 [i_1 + 2] [i_1] [i_1] [i_1]))))));
                    arr_23 [i_0] [i_6] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)31)) | (((/* implicit */int) arr_0 [i_1 + 3]))))) ? (((/* implicit */unsigned long long int) (~(var_14)))) : (max((((/* implicit */unsigned long long int) arr_0 [i_1 + 3])), (var_19)))));
                    var_28 = ((/* implicit */_Bool) arr_3 [i_1 + 3]);
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) + (max((((/* implicit */unsigned long long int) var_7)), (arr_2 [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22355))) : ((-(arr_2 [i_0] [i_0] [0LL])))));
                }
                arr_24 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) == (max((((/* implicit */unsigned long long int) var_9)), (arr_5 [i_0] [i_1])))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned char) ((var_8) | (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)51105)))))));
    /* LoopSeq 1 */
    for (short i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        var_31 = ((/* implicit */unsigned int) (~((((~(3097872826110320683LL))) ^ (((/* implicit */long long int) var_9))))));
        var_32 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [i_7] [(unsigned char)6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_25 [i_7] [i_7])))));
        var_33 ^= ((/* implicit */unsigned short) (~((-(arr_25 [(unsigned short)7] [i_7])))));
    }
    /* LoopNest 3 */
    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        for (unsigned long long int i_9 = 3; i_9 < 14; i_9 += 1) 
        {
            for (unsigned short i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                {
                    var_34 ^= ((/* implicit */unsigned short) (-((((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)115)) + (((/* implicit */int) (unsigned char)163))))) : (14882336481409772083ULL)))));
                    var_35 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_8] [i_8])) ? (((((/* implicit */int) arr_31 [i_8] [i_9 - 2])) + (((/* implicit */int) arr_31 [i_8] [i_9 + 1])))) : (((((/* implicit */_Bool) max((1848763654U), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */int) (unsigned char)86)) : (((((/* implicit */int) (short)9799)) << (((((/* implicit */int) (unsigned char)245)) - (241)))))))));
                    var_36 += ((/* implicit */short) 14882336481409772070ULL);
                }
            } 
        } 
    } 
}
