/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194151
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
    var_10 *= ((/* implicit */unsigned short) max((((long long int) ((1937583821U) - (2357383475U)))), (((/* implicit */long long int) var_0))));
    var_11 *= ((/* implicit */unsigned int) ((unsigned short) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)0))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_8 [i_0] = ((unsigned long long int) ((((_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((long long int) var_1))) : (((((/* implicit */_Bool) var_9)) ? (16623999443075246661ULL) : (var_8)))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_12 -= ((/* implicit */_Bool) (((-(2806609899336492682ULL))) | (((unsigned long long int) (short)29570))));
                                arr_19 [(signed char)1] [(signed char)1] [(signed char)1] [(signed char)1] [i_0] = ((/* implicit */_Bool) 1937583821U);
                                var_13 -= ((/* implicit */unsigned short) -105507012);
                                var_14 = ((/* implicit */signed char) ((((long long int) 105507011)) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 8620219188208020163LL)) <= (18446744073709551615ULL)))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) ^ (var_4)))) | (var_8)));
                }
                for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            {
                                arr_28 [i_0] [i_0] [i_0] [(signed char)0] [i_0] = ((/* implicit */int) ((((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (1937583821U)))) ^ (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50610))) : (1937583821U))) >> (((var_3) - (28239249)))))));
                                arr_29 [i_0] [i_0] [i_5] [(_Bool)1] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 255)) ? (255U) : (4294967295U)));
                                var_15 = ((/* implicit */unsigned short) (+(((unsigned long long int) 1937583821U))));
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (((~(((/* implicit */int) (unsigned char)9)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))))) | (((/* implicit */int) ((2357383475U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) (~(-8620219188208020163LL)));
                }
                for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        var_18 += ((/* implicit */unsigned long long int) ((8620219188208020163LL) << (((((((/* implicit */_Bool) 1937583821U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)29570))) : (4294967295U))) - (29570U)))));
                        arr_34 [i_0] [i_0] [(short)3] [i_9] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -255)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1)))), ((~(((/* implicit */int) var_7))))))), (((unsigned long long int) (unsigned short)44545))));
                        var_19 -= ((/* implicit */unsigned char) min((((-5611233568810957694LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8191))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)43769))))) || (((/* implicit */_Bool) ((unsigned char) (signed char)111))))))));
                        arr_35 [i_0] [i_1] [i_9] = ((((long long int) max((((/* implicit */long long int) var_3)), (-5683050892025766359LL)))) << (((min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (8620219188208020163LL))), (min((((/* implicit */long long int) var_7)), (var_4))))) + (8524526612265176585LL))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_11 = 3; i_11 < 11; i_11 += 4) 
                        {
                            arr_42 [i_0] [i_0] [i_8] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((_Bool) (-(((/* implicit */int) (unsigned short)21392)))))) : (var_3)));
                            arr_43 [i_8] [i_8] [i_1 + 1] [i_8] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) 3924767602U)) < (((((/* implicit */_Bool) (unsigned short)44545)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-14274))) : (var_4)))))) & (((/* implicit */int) ((_Bool) var_7)))));
                            var_20 = ((/* implicit */int) ((((((((/* implicit */long long int) 3924767602U)) / (-5683050892025766359LL))) | (var_4))) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)147)))));
                            arr_44 [i_0] [i_1] [9U] [9U] [i_0] = ((((unsigned long long int) -1LL)) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-15)) || ((_Bool)0)))))))));
                        }
                        var_21 &= ((/* implicit */unsigned long long int) ((int) ((unsigned short) ((unsigned char) (short)29570))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 13; i_12 += 4) /* same iter space */
                    {
                        var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (unsigned short)65535))) ? (((/* implicit */int) ((_Bool) (unsigned short)65535))) : (((/* implicit */int) var_1))));
                        var_23 += ((/* implicit */short) ((((_Bool) ((signed char) -5683050892025766359LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) == (((long long int) -1LL)))))) : ((~((+(2687890503U)))))));
                        var_24 += ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((1LL) & (((/* implicit */long long int) 4294967295U))))) > ((~(0ULL))))))));
                        var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_9) == (((/* implicit */long long int) 3))))) & (((/* implicit */int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237))))))));
                    }
                    for (unsigned int i_13 = 3; i_13 < 12; i_13 += 3) 
                    {
                        arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((var_5) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))))) ? (((((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((((long long int) var_5)) ^ (((/* implicit */long long int) ((/* implicit */int) ((signed char) 5981639430522235968LL))))))));
                        var_26 = ((/* implicit */unsigned short) ((((unsigned long long int) (unsigned short)31201)) >= (var_8)));
                        arr_50 [i_0] [i_8] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) & ((-(var_3)))));
                        arr_51 [i_0] [i_1 + 1] = ((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) ((short) 3367086888U))))));
                        arr_52 [i_0] = ((/* implicit */int) ((_Bool) (+(((((/* implicit */_Bool) 5895956752988997356ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))))));
                    }
                    var_27 ^= ((/* implicit */int) max((430812084U), (16383U)));
                }
                for (unsigned short i_14 = 0; i_14 < 13; i_14 += 4) /* same iter space */
                {
                    arr_55 [i_14] |= ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_1)) ? ((~(14019842333857869389ULL))) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)1)) >> (((/* implicit */int) (unsigned short)0))))));
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((signed char) 3367086888U)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) (unsigned short)20990))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16499))) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60126)))));
                }
                arr_56 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */signed char) ((var_5) >= (var_5)))), (((signed char) (-(var_8))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_15 = 2; i_15 < 12; i_15 += 1) 
                {
                    var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)61442)) ? ((+(((/* implicit */int) (signed char)30)))) : (((/* implicit */int) (unsigned short)1))));
                    var_30 = ((/* implicit */unsigned int) (signed char)-93);
                    var_31 = ((/* implicit */signed char) ((int) (short)-13534));
                    arr_59 [i_0] [i_0] = ((signed char) ((((/* implicit */int) (unsigned short)61057)) >> (((2578968103U) - (2578968088U)))));
                }
                var_32 = ((/* implicit */short) var_5);
            }
        } 
    } 
}
