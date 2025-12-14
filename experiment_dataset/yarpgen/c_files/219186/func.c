/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219186
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) max((4069446610U), (((/* implicit */unsigned int) ((var_4) == (((/* implicit */int) var_11)))))))), (max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))), (((var_5) / (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
                var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (short)-4890)), ((unsigned short)57344)))) << (((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (var_3)))), (max((((/* implicit */unsigned long long int) var_4)), (var_13))))) - (18446744073044709450ULL)))));
                var_15 *= ((/* implicit */unsigned char) ((long long int) min((((/* implicit */int) (short)4889)), (-1351702843))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (short)4885);
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (unsigned int i_4 = 2; i_4 < 21; i_4 += 1) 
            {
                {
                    var_17 -= ((/* implicit */unsigned int) ((((((long long int) var_9)) + (9223372036854775807LL))) << (((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + ((-(var_6))))) - (3432416564U)))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)196)), (var_2))))));
                                arr_23 [i_3] [i_3] [(unsigned short)7] [i_6 - 1] = ((/* implicit */_Bool) ((((((/* implicit */long long int) (+(2665529174U)))) / (max((((/* implicit */long long int) 8U)), (var_5))))) >> (((((unsigned int) 5011582423987652288ULL)) - (2153776790U)))));
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) 2473930221994840801LL))));
                                var_20 = ((/* implicit */unsigned short) var_5);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (signed char i_7 = 2; i_7 < 23; i_7 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (unsigned char)67)) & (((/* implicit */int) var_9))))))));
                        /* LoopSeq 3 */
                        for (int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            var_22 = ((/* implicit */short) max((((/* implicit */int) var_8)), (((((/* implicit */int) var_8)) / (((/* implicit */int) (unsigned char)65))))));
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_13))))))), (((unsigned int) var_7)))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */int) 3U);
                            var_25 = ((/* implicit */unsigned char) ((signed char) var_9));
                            arr_32 [i_3] = ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_33 [i_3] [i_7] [i_7] [i_7] [i_4] = ((var_5) % (((/* implicit */long long int) ((/* implicit */int) var_12))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
                        {
                            arr_37 [(signed char)5] [i_3] [i_2] = ((/* implicit */unsigned char) 4294967292U);
                            arr_38 [i_2] [i_3] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(var_10)))), (max((((/* implicit */long long int) var_9)), (var_5)))));
                            var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2625171522U)) && (((/* implicit */_Bool) ((short) (~(var_10)))))));
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((1893419197U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))), (var_1))))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_29 += ((/* implicit */signed char) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((var_5) - (1918281980234716641LL)))));
                        /* LoopSeq 1 */
                        for (signed char i_12 = 1; i_12 < 21; i_12 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) != (7020919559195954159LL))))));
                            var_31 &= ((/* implicit */short) ((((/* implicit */int) var_9)) + (((/* implicit */int) (unsigned char)200))));
                        }
                        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (((var_1) - (((/* implicit */unsigned long long int) 1U)))))))));
                    }
                    for (short i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        var_33 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((-5032486180405811777LL) >= (((/* implicit */long long int) ((/* implicit */int) var_9))))), ((!(((/* implicit */_Bool) (short)-13270)))))))) % (((var_13) << (((var_10) + (1682816035)))))));
                        arr_49 [i_2] [2U] [i_4 - 1] [i_3] = ((/* implicit */long long int) (+((~(((/* implicit */int) var_0))))));
                        var_34 ^= ((/* implicit */unsigned long long int) ((6U) != (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                    }
                    for (long long int i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        var_35 = ((/* implicit */int) min(((short)4878), (((/* implicit */short) (unsigned char)14))));
                        var_36 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
                    }
                    arr_53 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */unsigned long long int) (signed char)-14);
                }
            } 
        } 
        arr_54 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((12596942001361847963ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15494)))))) % (((/* implicit */int) var_0))));
    }
}
