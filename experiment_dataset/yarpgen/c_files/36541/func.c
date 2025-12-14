/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36541
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_13 ^= ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)233)), (5556913204553498075ULL)))) || (((/* implicit */_Bool) ((-2147483638) + (((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18293464130504206693ULL)) ? (1199480849) : (((int) -1760272696))))) : (min((((((/* implicit */_Bool) (short)32766)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)0] [i_0]))) : (15533799170112309786ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(signed char)12] [i_0])) ? (1760272696) : (((/* implicit */int) (signed char)8))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_2 [i_0] [i_0 - 1])), ((unsigned short)65535)))) ? (((/* implicit */int) ((short) (-2147483647 - 1)))) : (((((/* implicit */_Bool) 1760272696)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))))) : (((((/* implicit */int) (signed char)7)) - (((((/* implicit */int) (signed char)16)) - (-1760272711)))))));
    }
    var_14 = ((/* implicit */int) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)13548))))), (max((6771681322014763958LL), (((/* implicit */long long int) 2147483622)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (var_7)))))))));
    var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((int) max((((/* implicit */long long int) 4154801263U)), (4976251375846664889LL))))) - (((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-8))) | (var_2))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)10))) | (2233785415175766016LL)))))));
    /* LoopSeq 2 */
    for (unsigned int i_1 = 3; i_1 < 14; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */short) (~(arr_6 [3U])));
        arr_8 [i_1] = ((/* implicit */unsigned char) min((arr_5 [(unsigned short)10]), (((/* implicit */long long int) ((arr_6 [i_1]) - (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) arr_4 [(short)12]))))))))));
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */int) (unsigned short)61504))))) ? (((836973496) | (arr_4 [i_1]))) : (max((arr_4 [i_1 + 2]), (((/* implicit */int) (signed char)3))))))), (((((/* implicit */unsigned long long int) (~(arr_6 [11U])))) / (min((((/* implicit */unsigned long long int) arr_5 [4])), (2912944903597241829ULL))))))))));
    }
    for (unsigned int i_2 = 3; i_2 < 14; i_2 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */int) arr_11 [i_2])) : (max((arr_9 [i_2]), (((/* implicit */int) (unsigned short)65535)))))), ((+((-(((/* implicit */int) (unsigned char)32))))))));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 16; i_3 += 2) 
        {
            for (unsigned short i_4 = 2; i_4 < 15; i_4 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) arr_19 [i_2 + 1] [i_3] [i_4 - 2] [i_3]);
                    var_19 *= 11814762462082391191ULL;
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_19 [16] [i_3] [i_2] [i_2])) ? (13836324913081550246ULL) : (8495964172367532656ULL))) - (((/* implicit */unsigned long long int) max((3563037836U), (((/* implicit */unsigned int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [(unsigned char)15] [i_3] [i_2] [i_2]))) / (arr_5 [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)7))) : (((long long int) (signed char)-21)))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_12 [i_2] [(signed char)4])) ? (((/* implicit */int) arr_12 [i_3] [i_2])) : (((/* implicit */int) arr_18 [i_2] [i_2] [i_4] [i_2])))), ((~(((/* implicit */int) arr_11 [i_3 - 1]))))))))))));
                }
            } 
        } 
        arr_20 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_2 - 3] [i_2] [i_2] [i_2 + 4])) || (((/* implicit */_Bool) arr_10 [i_2 + 2]))))), (((((/* implicit */int) arr_18 [i_2 - 1] [i_2 + 4] [4] [i_2 - 2])) - (((/* implicit */int) arr_15 [i_2 - 2]))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_19 [i_2] [i_2] [i_2 - 3] [i_2]), (((/* implicit */short) max(((signed char)11), (((/* implicit */signed char) arr_11 [i_2 - 2]))))))))) : (arr_5 [i_2])));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2 - 1] [(_Bool)0] [i_2] [(unsigned char)10]))) - (arr_5 [i_2]))) - (((/* implicit */long long int) ((/* implicit */int) min((arr_19 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2]), (((/* implicit */short) (signed char)-1))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_17 [13LL] [10U] [4LL] [i_2])) : (((/* implicit */int) (unsigned char)214))))) ? (((((/* implicit */int) (unsigned char)7)) | (((/* implicit */int) arr_11 [i_2])))) : ((-(((/* implicit */int) arr_13 [i_2] [i_2]))))))) : (min((((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_5 [i_2])) : (532188263161879401ULL))), (((/* implicit */unsigned long long int) arr_5 [i_2]))))));
    }
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) (short)-13546))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_12))))))) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) 3157141459322187454LL)))), (((((/* implicit */_Bool) (unsigned char)148)) || (((/* implicit */_Bool) (unsigned char)105))))))) : (max((((/* implicit */int) (unsigned short)3)), ((+(((/* implicit */int) var_9))))))));
}
