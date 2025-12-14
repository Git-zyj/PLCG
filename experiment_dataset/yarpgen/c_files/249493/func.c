/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249493
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (unsigned short)26978)) ? (((/* implicit */int) (short)-32756)) : (((/* implicit */int) (unsigned short)65535)))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_17 = ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4] [i_1] [(signed char)0] [i_1] [i_4] [i_1])))))) : (min((16843047923702745641ULL), (((/* implicit */unsigned long long int) arr_8 [i_3] [i_1] [i_2] [2LL] [i_2] [i_4])))));
                                arr_12 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 654431091U)) : (((long long int) (signed char)73))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_5 = 1; i_5 < 17; i_5 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_18 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_17 [i_5] [(short)3] [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5])) ? (arr_17 [i_5] [i_5] [(unsigned short)7] [i_5] [i_5 + 1] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49046))))) <= (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)19024)), (var_0)))) ? (((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) % (((/* implicit */int) (unsigned short)51194)))))))));
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_7])), (12027031887962427322ULL)))))))));
                            }
                        } 
                    } 
                    arr_21 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) (short)32759)))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) != (var_0)))) : (((/* implicit */int) (unsigned short)12880))));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) arr_15 [14LL]))))))));
                }
                for (int i_8 = 1; i_8 < 17; i_8 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_14) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_12)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (4294967295U)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)0))))) : (var_1))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 3) 
                        {
                            {
                                arr_29 [i_0] [i_1] [i_1] [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) != (((/* implicit */int) ((unsigned short) arr_19 [i_1] [1U] [i_8 + 2] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_9])))));
                                var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)120)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_1] [i_1] [i_9] [i_10]))) / (arr_4 [i_10] [i_1] [i_0]))) > (((/* implicit */unsigned long long int) var_0))))))));
                            }
                        } 
                    } 
                    var_23 += ((((-821809492) == (9548450))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-7))))) : (((/* implicit */int) ((arr_15 [10]) && (arr_15 [2U])))));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [(short)10] [i_1])) ? (((/* implicit */int) arr_28 [i_0] [i_1] [(unsigned short)18] [i_1] [i_1])) : (2037214130)))), (arr_16 [i_1] [i_1])))) | ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (12881818054949623602ULL)))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 1; i_11 < 16; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 1; i_12 < 18; i_12 += 1) 
                        {
                            {
                                var_25 += arr_28 [i_0] [(short)14] [i_8] [i_11] [i_12];
                                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_20 [i_8 + 1] [i_8] [i_8])) ^ (arr_6 [i_12] [i_8] [i_8 + 1])))))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 19; i_13 += 4) 
                {
                    for (unsigned short i_14 = 0; i_14 < 19; i_14 += 1) 
                    {
                        {
                            var_27 ^= ((/* implicit */unsigned char) max((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) ((arr_10 [i_13] [i_0] [i_1] [i_1] [i_13] [i_13] [18U]) | (arr_10 [i_13] [12U] [4U] [i_1] [(unsigned char)18] [(short)6] [i_13]))))));
                            var_28 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_13] [i_14] [i_1] [i_1])) ? (785218365U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65524))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0] [i_1] [i_13] [i_14] [i_14]))))) ? (arr_40 [(_Bool)1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_1] [i_1] [i_13] [(unsigned short)0] [i_1] [i_14] [i_14]) != (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) var_15))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_15 = 2; i_15 < 16; i_15 += 4) 
    {
        for (short i_16 = 2; i_16 < 14; i_16 += 3) 
        {
            {
                arr_48 [i_16] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)-29431)) : (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) (unsigned char)0))));
                var_30 = ((/* implicit */_Bool) min((var_30), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((unsigned long long int) var_4)) : (((67301917025894328ULL) + (((/* implicit */unsigned long long int) var_13)))))))))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned long long int) (short)-32766);
    var_32 ^= ((/* implicit */_Bool) -2147483639);
}
