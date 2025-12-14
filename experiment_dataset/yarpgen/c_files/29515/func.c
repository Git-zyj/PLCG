/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29515
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
    var_15 = ((/* implicit */short) max((var_15), (((short) max((((((/* implicit */_Bool) 3075241041U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31792))) : (3555666968U))), (((/* implicit */unsigned int) ((_Bool) var_6))))))));
    var_16 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned short) (_Bool)0))))))) ? (max((((unsigned long long int) (short)-2453)), (((/* implicit */unsigned long long int) min((0), (((/* implicit */int) (signed char)-43))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)53)) * (((/* implicit */int) (_Bool)1))))) >= (max((((/* implicit */unsigned int) (signed char)-43)), (var_10)))))))));
    var_17 &= ((/* implicit */short) var_13);
    var_18 = ((/* implicit */unsigned char) (~(min((-2528288459664646321LL), (2528288459664646320LL)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [(short)2] [i_1] [6] = ((/* implicit */_Bool) ((((arr_1 [i_0 - 1]) ? (-995298382771981604LL) : (8105631610354467406LL))) * (((0LL) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2])))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
                        {
                            arr_13 [i_0] [i_1] [1LL] [i_0] [i_0] [i_0] = arr_6 [i_1] [i_1];
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) 2685943164803999587ULL))));
                            var_20 = ((((long long int) ((((/* implicit */_Bool) (short)11345)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))) : (16777184U)))) >> (((((((/* implicit */_Bool) (signed char)35)) ? (min((682411617153982436LL), (var_12))) : (((/* implicit */long long int) ((/* implicit */int) ((2221193763289866638ULL) > (arr_9 [(_Bool)1]))))))) + (1587119620909792593LL))));
                        }
                        for (signed char i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (+(((((((/* implicit */unsigned long long int) 16777184U)) < (2827408991223040549ULL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 7767959755789385484LL))))) : (((/* implicit */int) arr_10 [i_1 + 2] [i_1 + 3] [14ULL] [14ULL] [i_1])))))))));
                            arr_17 [(signed char)7] [i_1] [i_2] [8U] [i_5] = ((/* implicit */unsigned char) ((((16777166U) != (4294967286U))) ? (var_2) : (((((/* implicit */_Bool) ((unsigned int) arr_8 [i_1] [(signed char)8] [i_1] [i_1]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((9007199254740992LL) - (9007199254740984LL)))))) : (((4278190112U) << (((arr_14 [i_0] [i_0] [i_1] [14U] [(short)8]) - (3841925696U)))))))));
                        }
                        arr_18 [i_1] [i_1] = ((/* implicit */short) (!((!((_Bool)1)))));
                    }
                    var_22 &= ((/* implicit */short) ((((((/* implicit */long long int) (((_Bool)1) ? (712926447U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))))) & (((long long int) arr_16 [i_2] [i_1] [i_1 + 1] [i_1] [i_2])))) <= (((/* implicit */long long int) (~(((int) (short)12164)))))));
                    arr_19 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (arr_14 [i_0] [i_2] [i_1] [10] [i_2]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) (short)-12165)) : (((/* implicit */int) (short)26252))))) : (var_14)));
                    arr_20 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) -2528288459664646321LL)) ? (arr_15 [i_1 - 1] [i_1] [i_1 + 2] [i_1 + 3] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1729121036)) ? (2071379832939365154LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54392)))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5793)))));
                }
            } 
        } 
    } 
}
