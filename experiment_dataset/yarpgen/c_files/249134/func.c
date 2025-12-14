/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249134
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
    var_12 = (~(((/* implicit */int) ((short) ((7104431038300770355LL) != (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) ((((long long int) 581056315)) >> (((max((((/* implicit */int) (_Bool)1)), (max((((/* implicit */int) (unsigned char)131)), (581056337))))) - (581056329)))));
        var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max(((unsigned short)33427), (((/* implicit */unsigned short) var_0))))) && (((/* implicit */_Bool) ((unsigned int) (unsigned char)163))))) ? (min((((((/* implicit */int) (unsigned short)11323)) * (((/* implicit */int) (signed char)-112)))), (((/* implicit */int) min((arr_1 [i_0]), (var_0)))))) : (((/* implicit */int) arr_2 [(_Bool)1] [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((long long int) (unsigned short)60586));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        arr_15 [i_0] [i_3] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (var_11)))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [22U])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_1] [i_3])))) : (((/* implicit */int) ((signed char) arr_2 [i_0] [i_1]))))) | (min((((((/* implicit */int) arr_13 [i_1] [i_3])) - (581056337))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (arr_14 [i_0] [(short)16] [i_0] [i_1] [i_2] [i_3]))))))));
                        var_14 &= ((/* implicit */short) ((((/* implicit */_Bool) 4084193576435659592LL)) ? (581056315) : (581056339)));
                        var_15 = ((/* implicit */unsigned char) ((((max((1152921504606846975LL), (969646912244867356LL))) / ((((_Bool)1) ? (-5382464754751487975LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54196))))))) - (((long long int) ((long long int) (signed char)2)))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */signed char) ((var_11) >> (((((/* implicit */int) (unsigned char)247)) >> (((1401547601) - (1401547589)))))));
    }
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) ((arr_13 [i_4] [i_4]) ? (((/* implicit */int) arr_13 [i_4] [i_4])) : (((/* implicit */int) arr_13 [i_4] [i_4]))))) ? (((/* implicit */int) (!(arr_13 [i_4] [i_4])))) : (((((/* implicit */int) arr_13 [i_4] [i_4])) << (((/* implicit */int) arr_13 [i_4] [i_4]))))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                {
                    var_18 = ((/* implicit */int) min((((unsigned short) ((unsigned char) arr_9 [i_4] [i_6] [i_4] [7]))), (((/* implicit */unsigned short) (!(arr_13 [i_4] [i_6]))))));
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_23 [(unsigned short)12] [(signed char)0]))))) <= (var_2))) ? (((581056315) / (((/* implicit */int) (unsigned char)244)))) : (((/* implicit */int) ((unsigned char) (+(-4984117973691180084LL))))))))));
                    arr_24 [i_5] [(_Bool)1] [(_Bool)1] [(short)2] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_6 [i_4])) >= (((/* implicit */int) var_9)))) ? (min((((((/* implicit */_Bool) (signed char)-2)) ? (var_11) : (((/* implicit */int) var_4)))), ((+(((/* implicit */int) arr_7 [i_4] [i_6])))))) : (((((/* implicit */_Bool) arr_7 [i_4] [i_5])) ? (((/* implicit */int) arr_7 [i_6] [i_6])) : (-1718959582)))));
                }
            } 
        } 
    }
}
