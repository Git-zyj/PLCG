/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234240
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
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */int) (short)18251);
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min(((-(((/* implicit */int) min((((/* implicit */short) var_1)), ((short)18251)))))), (((/* implicit */int) arr_4 [i_2])))))));
                }
            } 
        } 
    } 
    var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) >= (((/* implicit */int) (short)24576)))) ? (((((/* implicit */int) var_4)) & (((/* implicit */int) var_13)))) : ((+(((/* implicit */int) (_Bool)1))))))) || (((/* implicit */_Bool) var_3))));
    var_21 &= ((/* implicit */unsigned long long int) min(((_Bool)1), (((((((/* implicit */_Bool) var_10)) ? (var_17) : (((/* implicit */int) var_8)))) > (((/* implicit */int) var_8))))));
    /* LoopSeq 1 */
    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 2) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_4))))))) && (((/* implicit */_Bool) ((short) arr_13 [i_3 + 2] [11])))));
        var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) (short)-18251)))))))));
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_5) + (((/* implicit */unsigned long long int) 0))))) ? (min(((-(4796672515967490376LL))), (((/* implicit */long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) (short)-18251))))))) : (((/* implicit */long long int) ((arr_16 [i_3 + 4] [i_3 - 1]) ? (((/* implicit */int) (unsigned short)18265)) : (((((/* implicit */int) var_4)) + (((/* implicit */int) (short)18239))))))))))));
            arr_18 [i_3] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_13 [i_3] [i_4]))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned short i_5 = 1; i_5 < 10; i_5 += 2) /* same iter space */
            {
                var_25 |= ((/* implicit */short) arr_16 [i_3] [i_3]);
                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) var_13)) % (((/* implicit */int) arr_19 [i_3] [i_4] [i_5]))))))));
                arr_22 [i_4] [i_4] = ((/* implicit */unsigned long long int) (short)18251);
            }
            for (unsigned short i_6 = 1; i_6 < 10; i_6 += 2) /* same iter space */
            {
                arr_27 [i_3] [i_4] [i_4] [i_4] = ((unsigned short) (~(((/* implicit */int) min((arr_23 [i_3] [i_4] [i_4] [i_6]), (((/* implicit */unsigned short) var_14)))))));
                arr_28 [i_3] [i_4] [i_6 + 1] = ((/* implicit */long long int) (~(max((((((/* implicit */_Bool) arr_25 [3])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_15 [i_3])))))));
            }
            for (unsigned short i_7 = 1; i_7 < 10; i_7 += 2) /* same iter space */
            {
                arr_31 [i_3 + 3] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) min(((short)19421), ((short)24576)))) ^ (((/* implicit */int) var_4))))) ^ ((~(((((/* implicit */_Bool) -4796672515967490377LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29029))) : (-4796672515967490376LL)))))));
                /* LoopSeq 2 */
                for (long long int i_8 = 0; i_8 < 14; i_8 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_14 [i_7 + 2])), (((((/* implicit */_Bool) (short)17899)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)1))))) : (min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_17 [i_4])))))));
                    var_28 += ((/* implicit */short) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned char)75)) >= (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_14 [i_4]))));
                }
                for (long long int i_9 = 0; i_9 < 14; i_9 += 3) /* same iter space */
                {
                    var_29 -= ((/* implicit */long long int) var_10);
                    var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) min((arr_25 [i_3]), (((/* implicit */unsigned short) var_4))))) == (((/* implicit */int) arr_34 [i_3] [i_4])))))));
                    arr_38 [7] [i_7] [i_4] [i_4] [3U] [i_3] = arr_29 [i_9] [i_9] [i_9] [i_9];
                }
                var_31 = ((/* implicit */int) ((arr_15 [i_7]) % (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-119)) % (((/* implicit */int) arr_23 [(unsigned char)6] [2LL] [i_3 - 1] [i_4])))))));
                arr_39 [i_3] [i_3] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_16 [i_3] [i_3])) & (((/* implicit */int) arr_23 [i_3 + 2] [i_4] [i_7] [i_7])))) ^ (((/* implicit */int) max((arr_21 [i_4]), (((/* implicit */short) var_10)))))))) | (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [(unsigned char)5] [i_4] [i_7 - 1] [i_3 + 3] [i_3 + 4]))) & (var_5))), (((13535034533818464999ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))));
                var_32 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(14347621770609612004ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62076))) : (max((((/* implicit */unsigned long long int) (unsigned short)65535)), (4975987143329897363ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_24 [(signed char)10] [i_4] [i_7] [i_7])))) : (min((((((/* implicit */_Bool) arr_30 [i_3] [(short)5] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_17 [8LL]))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), ((short)-14663))))))));
            }
            for (short i_10 = 0; i_10 < 14; i_10 += 3) 
            {
                var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)191)), ((short)-12516))))));
                arr_43 [i_3] [(_Bool)1] [i_4] [(unsigned char)4] &= ((/* implicit */unsigned short) ((0ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                var_34 = ((/* implicit */short) var_17);
            }
            var_35 = ((/* implicit */int) ((arr_26 [i_4] [i_4] [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((max((((/* implicit */unsigned short) arr_37 [i_4] [i_3 + 1] [i_4] [i_4] [i_4])), (arr_13 [i_4] [8]))), ((unsigned short)33011))))) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_26 [i_3] [i_4] [i_4]))))), ((~(var_9)))))));
            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((arr_16 [i_3 + 4] [i_3 + 3]) ? (((/* implicit */int) arr_16 [i_3 + 1] [i_3 + 2])) : (((/* implicit */int) arr_16 [i_3 + 4] [i_3 - 1]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3 + 1] [i_3 + 2]))) * (var_11))))))));
        }
        arr_44 [i_3] [i_3] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (-4796672515967490401LL))) : (((/* implicit */long long int) ((arr_26 [(short)2] [(short)2] [i_3 + 4]) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (short)26955))))))));
    }
    var_37 -= ((/* implicit */signed char) 851124853);
}
