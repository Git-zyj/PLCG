/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26022
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
    var_14 = ((/* implicit */long long int) var_6);
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)126)), (var_11))))) : (((((/* implicit */_Bool) (signed char)82)) ? (1073733632ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (3287456632U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-4096)))))) : (min((var_8), (min((((/* implicit */unsigned long long int) var_12)), (var_9)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 11; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) var_5);
                            arr_14 [i_2] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 696900525U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)72)))) : (arr_3 [i_3]))) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-31104)))));
                            var_16 = ((/* implicit */_Bool) ((9556763815050909146ULL) >> (((/* implicit */int) (_Bool)1))));
                            var_17 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) (unsigned short)49675)))));
                            var_18 = ((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned short)769))))));
                        }
                    } 
                } 
                arr_15 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) >= (var_13)));
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    for (unsigned short i_5 = 1; i_5 < 12; i_5 += 3) 
                    {
                        for (short i_6 = 1; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)155))));
                                var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)16)) | (((/* implicit */int) (unsigned char)249))))))) ? (((((/* implicit */_Bool) (unsigned short)50383)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)22))) : (8889980258658642469ULL))) : (((/* implicit */unsigned long long int) (~(((long long int) (short)8554)))))));
                                arr_24 [i_0] [i_1] [(signed char)13] [i_5] [i_6] = ((/* implicit */long long int) ((((((/* implicit */int) var_12)) != ((~(((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? ((~((((_Bool)0) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) arr_4 [i_1] [i_6])))))) : ((+(((/* implicit */int) max((var_12), (((/* implicit */short) var_3)))))))));
                                var_21 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) (-(((/* implicit */int) (short)8559))))), (((arr_0 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4] [i_5]))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)-26134)) - (((/* implicit */int) (unsigned char)198))))) ? (((3461585040U) | (((/* implicit */unsigned int) -1567481701)))) : (((/* implicit */unsigned int) var_10))))));
                            }
                        } 
                    } 
                } 
                arr_25 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_1]) : (((/* implicit */int) arr_8 [i_0] [i_0])))), ((+(((/* implicit */int) (short)10869))))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1] [i_0] [i_1 + 1])) ? (((((/* implicit */_Bool) arr_19 [(unsigned char)7] [i_0 - 1] [i_0] [i_1] [i_1] [(_Bool)1])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0 + 2] [i_0 + 2] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)29021))))) >= ((+(3287456618U)))))))));
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_6 [i_1 + 1] [i_0 - 1])))) ? ((~(((/* implicit */int) arr_21 [i_0] [(unsigned char)6] [i_1] [i_7])))) : (((/* implicit */int) ((unsigned short) var_5)))));
                    arr_28 [i_7] [i_1] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((var_10) ^ (((/* implicit */int) arr_5 [(signed char)9] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0 - 1] [3LL] [i_1 + 1]))) : (min((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]), (var_5))))));
                }
            }
        } 
    } 
    var_23 -= ((/* implicit */unsigned char) min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19))) <= (3287456632U))))));
}
