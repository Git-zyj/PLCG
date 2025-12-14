/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245455
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-(2004458290)))) ? (max((((/* implicit */unsigned long long int) var_14)), (max((arr_1 [i_0]), (arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-85))) == (arr_1 [7ULL])))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */short) (((-(((/* implicit */int) (short)-11121)))) ^ (((/* implicit */int) (short)-9892))));
                                var_20 -= ((/* implicit */unsigned int) ((int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2]))))) <= (((/* implicit */int) max((var_0), (arr_11 [i_4] [i_2 - 2] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-9904)) : (((/* implicit */int) (short)11120))))) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (max((((/* implicit */int) (_Bool)1)), (-882176203)))))) ? (((((/* implicit */_Bool) (short)-11121)) ? (((/* implicit */int) (short)9892)) : (1358917317))) : (min((((((/* implicit */_Bool) 761770782436105929ULL)) ? (((/* implicit */int) (short)11116)) : (((/* implicit */int) (short)-11121)))), (((((/* implicit */_Bool) 15224965650359729035ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)32768))))))));
                    arr_14 [i_0] [i_1] [i_2 - 2] [i_2 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_2 - 2])) : (((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) max(((short)11112), ((short)9892)))) : ((-(((/* implicit */int) var_12))))));
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((max((112024192), (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1])))) & (((var_0) ? (((/* implicit */int) arr_7 [i_0] [i_1] [(short)5] [(short)3])) : (((/* implicit */int) min(((short)-9892), (((/* implicit */short) (_Bool)1))))))))))));
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (unsigned short)32768))));
        arr_19 [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2124752480365570231LL)) ^ (((unsigned long long int) (short)11112)))))));
        arr_20 [i_5] [i_5] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (1073741824)))), (var_17)));
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            for (long long int i_7 = 3; i_7 < 10; i_7 += 4) 
            {
                {
                    var_24 *= ((/* implicit */unsigned long long int) ((int) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55996))) : (arr_10 [i_5] [i_5] [i_5] [i_6] [i_7]))) == (((/* implicit */long long int) ((int) 771640741U))))));
                    var_25 += ((/* implicit */unsigned char) ((unsigned short) (((-(((/* implicit */int) (unsigned char)40)))) * (((/* implicit */int) min((((/* implicit */signed char) var_13)), ((signed char)-66)))))));
                    arr_27 [2LL] [i_6] [i_5] = ((/* implicit */unsigned long long int) -1406567813816517804LL);
                    arr_28 [i_7 - 2] [4LL] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 8195330104261966651ULL)) ? (min(((((_Bool)1) ? (((/* implicit */int) arr_26 [i_6] [(short)10])) : (((/* implicit */int) (short)-9917)))), (((((/* implicit */_Bool) var_15)) ? (var_4) : (((/* implicit */int) (unsigned char)157)))))) : (((/* implicit */int) min((arr_24 [i_5] [i_7] [i_7 - 2] [i_7]), (min((((/* implicit */unsigned char) var_13)), (var_15))))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (signed char i_8 = 1; i_8 < 17; i_8 += 3) 
    {
        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 4) 
        {
            {
                arr_35 [i_8] [i_8 + 1] = ((/* implicit */unsigned short) var_15);
                arr_36 [i_8] [i_8 + 1] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_34 [i_8] [i_9])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_32 [i_9])))))) ? (((((/* implicit */_Bool) ((arr_29 [i_8] [i_9]) ? (4294967295U) : (0U)))) ? (((/* implicit */int) ((2741059546U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) arr_32 [i_8 + 1])) ? (((/* implicit */int) (unsigned short)16384)) : (((/* implicit */int) (short)9554)))))) : ((~((~(0)))))));
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        {
                            arr_43 [i_11] [i_10] [i_9] [i_8] = ((/* implicit */unsigned short) var_6);
                            arr_44 [i_8] = ((/* implicit */unsigned char) ((15848110797577849328ULL) <= (((/* implicit */unsigned long long int) 2772182675U))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */_Bool) min((((int) var_1)), (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_9] [i_8 - 1])) && (((/* implicit */_Bool) arr_33 [i_8] [i_8 + 2])))))));
                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_38 [17] [i_8 - 1])), (var_8)))) ? (((/* implicit */int) (unsigned short)59682)) : (((((/* implicit */_Bool) arr_42 [i_8 + 1] [i_8] [i_9] [i_9])) ? (((/* implicit */int) arr_30 [i_8])) : (((/* implicit */int) arr_41 [i_8 + 1] [13LL] [i_8] [i_9]))))))) ? (max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-9917)) : (((/* implicit */int) var_14)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32765))) <= (1406567813816517804LL)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_8] [i_9]))))))))));
            }
        } 
    } 
}
