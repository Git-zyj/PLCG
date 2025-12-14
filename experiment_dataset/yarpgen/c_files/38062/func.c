/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38062
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
    for (int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [(short)3] = ((/* implicit */short) ((((/* implicit */unsigned int) (+(-4)))) > (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) (short)-32757)) : (((/* implicit */int) var_4))))), (max((arr_3 [i_1] [i_0 + 1]), (((/* implicit */unsigned int) arr_1 [i_0]))))))));
            var_10 = ((/* implicit */unsigned int) (((~(((/* implicit */int) min(((unsigned char)147), (((/* implicit */unsigned char) var_8))))))) % (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */short) var_8)))))));
            var_11 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) -111232285)), (arr_3 [i_0] [i_0])))));
            var_12 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((111232263) <= (((/* implicit */int) (short)3293))))) >> ((((-(111232285))) + (111232315)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1148417904979476480LL)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : ((-(((/* implicit */int) var_2))))))) : (max((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)125))))), (((/* implicit */long long int) (~(arr_4 [i_0] [i_0]))))))));
            var_13 ^= ((/* implicit */unsigned short) 18446744073709551615ULL);
        }
        arr_6 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-120)), (var_2)))) && (((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (long long int i_3 = 1; i_3 < 18; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        var_14 &= ((((/* implicit */int) arr_10 [i_0 + 1])) | (-111232264));
                        arr_16 [i_0] [i_0] [i_0] [i_0] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_10 [i_0 - 1])) : (((/* implicit */int) arr_10 [i_3 + 1]))));
                        var_15 = ((/* implicit */_Bool) min((var_15), ((!(((((/* implicit */int) (unsigned short)35554)) <= (-207146159)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_16 *= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((unsigned int) 111232291))) ? ((~(1148417904979476484LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 206567676U)) ? (((/* implicit */int) (unsigned short)55934)) : (((/* implicit */int) var_2))))))));
                                arr_23 [1LL] [1LL] [1LL] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_10 [i_0 - 1])) ? (7727499698473990188ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 - 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */int) arr_10 [i_0 + 1])) : (((/* implicit */int) (signed char)-121)))))));
                            }
                        } 
                    } 
                    arr_24 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((short) (short)-27830))), (((unsigned short) arr_22 [i_0 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-15)))) ? (((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 111232307))))) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        for (int i_8 = 2; i_8 < 19; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_31 [i_8] [i_8] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (-3631173567976502441LL)))), (min((min((((/* implicit */unsigned long long int) (_Bool)0)), (3183229677067364215ULL))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                    var_18 = ((/* implicit */unsigned short) min((((((/* implicit */int) var_5)) * (((/* implicit */int) (unsigned short)65527)))), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) var_7)), ((short)-32752)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned int) (short)-13)), (4270260313U))) != (((/* implicit */unsigned int) min(((-2147483647 - 1)), (((/* implicit */int) var_6))))))))) : (((max((((/* implicit */unsigned long long int) var_9)), (7727499698473990212ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
}
