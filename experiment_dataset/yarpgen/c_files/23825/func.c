/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23825
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
    var_14 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_0))))), (min((((/* implicit */unsigned long long int) var_1)), (13794513508091305256ULL))))) * (((/* implicit */unsigned long long int) min((((var_10) / (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) max(((signed char)-82), (((/* implicit */signed char) (_Bool)0))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        arr_2 [8ULL] |= ((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) - (((/* implicit */int) (signed char)-62)))) >> (((((arr_0 [(unsigned char)12]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) - (9800398485886001280ULL)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((var_6) | (var_6))) ^ (((/* implicit */unsigned long long int) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)3007))))))));
        var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_12)) * (((/* implicit */int) (unsigned char)151)))) / (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_1 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) | (var_4))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) var_3))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 2; i_2 < 21; i_2 += 3) 
        {
            arr_11 [i_1] [i_2] = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_0)) - (31534)))))), (((arr_8 [i_1] [i_2 + 1]) ^ (((/* implicit */unsigned long long int) arr_9 [i_1])))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_5 [i_1] [i_2])) > (10193684159308412601ULL)))), (max((var_6), (((/* implicit */unsigned long long int) arr_9 [i_1]))))))));
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((((arr_6 [i_2 - 1] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) - (min((arr_7 [i_1]), (((/* implicit */unsigned long long int) var_2)))))) / (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)82))) + (arr_9 [i_1]))) / (((arr_5 [i_1] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) (short)23358)))))))))))));
            arr_12 [(signed char)19] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)-23358), (((/* implicit */short) var_1))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (0LL))))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23368))) / (var_6))), (max((((/* implicit */unsigned long long int) (short)-17545)), (arr_6 [i_1] [i_1])))))));
        }
        var_17 = ((/* implicit */_Bool) max((((((arr_8 [i_1] [11LL]) % (((/* implicit */unsigned long long int) var_10)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])) > (arr_6 [i_1] [i_1]))))))), (((max((var_6), (arr_7 [i_1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)0)), (var_7)))))))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_6)))))) <= (((var_4) * (arr_6 [i_1] [i_1])))))), (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (arr_6 [i_1] [i_1])))) + (((/* implicit */int) ((((/* implicit */int) (short)-23358)) > (((/* implicit */int) (signed char)87))))))))))));
    }
    var_19 = ((/* implicit */long long int) max((min((max((var_6), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_8))))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-6334)) + (((/* implicit */int) (short)-1)))))))));
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) min((var_7), (((/* implicit */short) arr_14 [i_3] [i_4]))))), (((((/* implicit */int) (signed char)-56)) * (((/* implicit */int) var_13))))))) & (max((((/* implicit */unsigned long long int) max((arr_16 [17U] [i_3]), (((/* implicit */long long int) arr_14 [i_3] [i_3]))))), (min((((/* implicit */unsigned long long int) arr_15 [i_3] [i_3])), (var_11))))))))));
                var_21 = ((/* implicit */unsigned short) ((min((((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3] [(_Bool)1] [i_3]))))), (min((((/* implicit */unsigned long long int) (signed char)82)), (0ULL))))) - (((/* implicit */unsigned long long int) ((((arr_17 [i_3 + 1]) | (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3] [i_3]))))) & (((/* implicit */long long int) ((0) + (((/* implicit */int) (_Bool)1))))))))));
                arr_20 [i_3] = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_3] [i_4])) | (((/* implicit */int) (signed char)-99))))) == (max((((/* implicit */unsigned long long int) 5910806641713035590LL)), (var_4))))), (((-7938120611069464815LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)106)))))));
            }
        } 
    } 
}
