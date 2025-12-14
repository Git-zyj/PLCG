/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26479
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
    var_14 = ((/* implicit */unsigned short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (var_3))) & (((/* implicit */unsigned long long int) ((var_4) | (((/* implicit */int) (unsigned char)193))))))) >> (((((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))) | (((((/* implicit */long long int) ((/* implicit */int) var_13))) | (var_1))))) + (18LL)))));
    var_15 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned short) var_5)), ((unsigned short)1)))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) 6678554764272134583ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_10))))) : (((var_6) ? (var_1) : (((/* implicit */long long int) var_4))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((((unsigned int) ((unsigned long long int) var_1))) * (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)65535)))) + (((/* implicit */int) ((_Bool) (unsigned short)65535))))))));
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((((1332245974) & (((/* implicit */int) (unsigned char)189)))), (((/* implicit */int) ((8442863680903875613ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15208))))))))) ? (((((/* implicit */_Bool) ((short) (short)-3470))) ? (min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 + 1] [i_1 + 1] [i_2])), (var_7))) : (((((/* implicit */_Bool) 8589934592ULL)) ? (1534099748341094609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-109))))))) : (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) > (arr_0 [i_0]))))));
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */_Bool) ((int) ((_Bool) ((short) var_3))));
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (unsigned int i_5 = 4; i_5 < 9; i_5 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((var_2) % (((/* implicit */int) arr_12 [i_3])))), (((((/* implicit */int) arr_17 [i_3] [i_4] [i_5] [i_5])) | (0)))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) 0U))))), (((arr_2 [13]) % (((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_3]))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [4LL] [1] [i_4] [(unsigned char)0])) >> (((1220051949) - (1220051946)))))) ? (max((((/* implicit */unsigned int) (short)-3470)), (arr_7 [i_3] [i_3] [10ULL]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((13835058055282163712ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65409)))))))))));
                    var_20 = ((((/* implicit */int) ((((((/* implicit */_Bool) 7539031971425652964LL)) ? (1452686978) : (((/* implicit */int) (unsigned short)1)))) < (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) arr_13 [i_3] [(unsigned char)5]))))))) ^ (((/* implicit */int) ((unsigned short) ((signed char) (unsigned short)22935)))));
                    var_21 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (unsigned short)1))))) ? (((((/* implicit */int) (unsigned short)8957)) / (((/* implicit */int) (unsigned char)193)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_17 [i_5] [(signed char)4] [i_3] [i_3])), (var_8)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)30626))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1))))))))));
                }
            } 
        } 
    } 
}
