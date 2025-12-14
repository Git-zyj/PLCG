/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2002
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
    var_11 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((unsigned char) 0U))) ? (((long long int) var_10)) : (((((/* implicit */_Bool) var_0)) ? (-9223372036854775801LL) : (((/* implicit */long long int) var_2))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(3620894929U)))))))));
                var_13 = ((/* implicit */unsigned int) max((arr_0 [8ULL]), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 2]))) >= (max((8000957015588007638LL), (((/* implicit */long long int) var_5)))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((arr_11 [i_1] [(signed char)6] [i_1] [(_Bool)1] [(short)6] [i_4]), (((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_2 + 1] [(short)16])))))))) ? (((/* implicit */int) ((signed char) 242730053))) : (min((((/* implicit */int) arr_7 [i_4] [i_1])), ((~(((/* implicit */int) (unsigned char)6))))))));
                                arr_12 [(unsigned char)5] [i_1] [i_2] [i_2] [i_2] [i_1] [(short)10] = arr_2 [0] [11ULL] [i_1];
                                var_15 ^= ((/* implicit */_Bool) max((-9223372036854775801LL), (((/* implicit */long long int) var_1))));
                                arr_13 [i_0 + 2] [i_0 + 2] [i_1] [(unsigned char)16] [i_0] [(unsigned char)8] = ((/* implicit */signed char) min((((/* implicit */int) min((arr_8 [i_4] [i_3] [i_0 - 2]), (arr_8 [i_0 + 1] [1U] [i_0 + 1])))), ((~(((/* implicit */int) arr_8 [i_3] [i_1] [i_0]))))));
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(26ULL)))) || (((/* implicit */_Bool) ((max((var_2), (((/* implicit */unsigned int) (unsigned char)98)))) >> ((((~(2734385761U))) - (1560581533U))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 21; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned int i_7 = 4; i_7 < 21; i_7 += 3) 
                            {
                                arr_23 [i_0] [i_1] [i_0] [i_1] [i_7] = ((/* implicit */unsigned short) (_Bool)1);
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)65136)))))));
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) -1678481361))));
                                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1]))));
                            }
                            for (int i_8 = 1; i_8 < 19; i_8 += 3) 
                            {
                                arr_26 [i_1] [i_5] [i_5 + 1] [i_6] [i_8] [i_0] = ((/* implicit */unsigned int) var_5);
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_10 [i_8 + 2] [i_8] [i_0 + 3] [i_5 - 1] [(unsigned char)14] [i_1] [i_0 + 3])), (1560581534U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [13U] [i_0] [i_0])) ? (((/* implicit */int) arr_21 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 4] [i_0])) : (((/* implicit */int) arr_3 [(_Bool)1])))))))) ? (((/* implicit */long long int) (~(arr_16 [i_0] [i_1] [7ULL] [2U])))) : (-8000957015588007643LL)));
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) >> (((arr_14 [(short)2] [(_Bool)0] [i_5] [6U]) - (1004101991)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294967293U))))) : (((/* implicit */int) ((_Bool) (unsigned char)20)))))))))));
                            }
                            for (unsigned int i_9 = 1; i_9 < 19; i_9 += 4) /* same iter space */
                            {
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max((((short) ((unsigned int) var_5))), (((/* implicit */short) (!(((((/* implicit */int) (unsigned char)135)) != (((/* implicit */int) (unsigned char)236))))))))))));
                                var_23 = ((/* implicit */unsigned int) min((-8000957015588007643LL), (8000957015588007637LL)));
                                arr_29 [i_1] [(signed char)19] [i_5 + 1] [4U] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_1 [i_5 - 1])) ? (arr_1 [i_9 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (short)3630))))), (((/* implicit */long long int) min((arr_20 [i_0] [i_0]), (arr_20 [i_0 - 1] [i_0 - 1]))))));
                                arr_30 [(signed char)14] [i_1] [16LL] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((int) ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [8U] [i_6])) ? (((/* implicit */long long int) var_3)) : (8000957015588007643LL)))));
                                var_24 = ((/* implicit */int) ((((_Bool) max((-1179408535), (((/* implicit */int) (signed char)-51))))) ? ((+((~(42ULL))))) : (((/* implicit */unsigned long long int) (~((-(-8000957015588007643LL))))))));
                            }
                            for (unsigned int i_10 = 1; i_10 < 19; i_10 += 4) /* same iter space */
                            {
                                var_25 &= ((((/* implicit */_Bool) min((((/* implicit */signed char) ((270582939648LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_11 [6] [i_1] [i_5] [i_6] [i_10 + 2] [4U])))))), (((signed char) var_9))))) ? ((+(((arr_22 [13ULL] [i_1] [i_5] [i_5]) & (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */short) (!(((/* implicit */_Bool) var_5))))))))));
                                var_26 &= ((/* implicit */long long int) arr_10 [i_0 - 2] [(_Bool)1] [i_1] [i_5] [(_Bool)0] [i_6] [i_10]);
                            }
                            var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (-2147483647 - 1))))) : (max((arr_22 [i_0] [i_0] [i_0] [i_0]), (var_4))))) | (1896776259U)));
                        }
                    } 
                } 
            }
        } 
    } 
}
